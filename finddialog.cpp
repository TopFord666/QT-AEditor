#include "finddialog.h"
#include "ui_finddialog.h"

#include <QLineEdit>
#include <QPushButton>
#include <QShowEvent>

FindDialog::FindDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::FindDialog)
{
    ui->setupUi(this);

    // 去掉标题栏上的“?”上下文帮助按钮
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);

    // 初始没有关键字，禁用查找按钮；由输入框内容变化控制
    ui->findNextButton->setEnabled(false);

    connect(ui->findNextButton, &QPushButton::clicked, this, &FindDialog::onFindNextClicked);
    // “取消”与标题栏关闭按钮都走 QDialog::reject()，只关闭对话框，不影响主窗口
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &FindDialog::onSearchTextChanged);

    // 输入框内按回车由 findNextButton 的 default 属性触发 clicked()，
    // 因此不再单独连接 returnPressed，避免一次回车发出两次查找请求。
}

FindDialog::~FindDialog()
{
    delete ui;
}

QString FindDialog::searchText() const
{
    return ui->searchLineEdit->text();
}

bool FindDialog::isCaseSensitive() const
{
    return ui->caseSensitiveCheckBox->isChecked();
}

bool FindDialog::isWholeWord() const
{
    return ui->wholeWordCheckBox->isChecked();
}

FindDialog::Direction FindDialog::direction() const
{
    return ui->backwardRadioButton->isChecked() ? Direction::Backward : Direction::Forward;
}

void FindDialog::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);

    ui->searchLineEdit->setFocus();
    ui->searchLineEdit->selectAll();
}

void FindDialog::onFindNextClicked()
{
    const QString text = ui->searchLineEdit->text();
    if (text.isEmpty()) {
        return;
    }

    // 本阶段只负责发出查找条件，具体的高亮与定位留待后续实现
    emit searchRequested(text, isCaseSensitive(), isWholeWord(), direction());
}

void FindDialog::onSearchTextChanged(const QString &text)
{
    ui->findNextButton->setEnabled(!text.isEmpty());
}
