#include "replacedialog.h"
#include "ui_replacedialog.h"

#include <QLineEdit>
#include <QPushButton>
#include <QShowEvent>

ReplaceDialog::ReplaceDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::ReplaceDialog)
{
    ui->setupUi(this);

    // 去掉标题栏上的“?”上下文帮助按钮
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);

    // 没有查找关键字时，三个功能按钮都不可用；“替换为”允许为空（表示删除）
    ui->findNextButton->setEnabled(false);
    ui->replaceButton->setEnabled(false);
    ui->replaceAllButton->setEnabled(false);

    connect(ui->findNextButton, &QPushButton::clicked, this, &ReplaceDialog::onFindNextClicked);
    connect(ui->replaceButton, &QPushButton::clicked, this, &ReplaceDialog::onReplaceClicked);
    connect(ui->replaceAllButton, &QPushButton::clicked, this, &ReplaceDialog::onReplaceAllClicked);
    // “取消”与标题栏关闭按钮都只关闭对话框，不影响主窗口
    connect(ui->cancelButton, &QPushButton::clicked, this, &QDialog::reject);
    connect(ui->searchLineEdit, &QLineEdit::textChanged, this, &ReplaceDialog::onSearchTextChanged);

    // 输入框内按回车由 findNextButton 的 default 属性触发 clicked()，
    // 因此不再单独连接 returnPressed，避免一次回车发出两次请求。
}

ReplaceDialog::~ReplaceDialog()
{
    delete ui;
}

QString ReplaceDialog::searchText() const
{
    return ui->searchLineEdit->text();
}

QString ReplaceDialog::replaceText() const
{
    return ui->replaceLineEdit->text();
}

bool ReplaceDialog::isCaseSensitive() const
{
    return ui->caseSensitiveCheckBox->isChecked();
}

bool ReplaceDialog::isWholeWord() const
{
    return ui->wholeWordCheckBox->isChecked();
}

ReplaceDialog::Direction ReplaceDialog::direction() const
{
    return ui->backwardRadioButton->isChecked() ? Direction::Backward : Direction::Forward;
}

void ReplaceDialog::showEvent(QShowEvent *event)
{
    QDialog::showEvent(event);

    ui->searchLineEdit->setFocus();
    ui->searchLineEdit->selectAll();
}

void ReplaceDialog::onFindNextClicked()
{
    if (searchText().isEmpty()) {
        return;
    }

    // 本阶段只负责发出条件，具体的高亮与定位留待后续实现
    emit findNextRequested(searchText(), isCaseSensitive(), isWholeWord(), direction());
}

void ReplaceDialog::onReplaceClicked()
{
    if (searchText().isEmpty()) {
        return;
    }

    emit replaceRequested(searchText(), replaceText(), isCaseSensitive(), isWholeWord(), direction());
}

void ReplaceDialog::onReplaceAllClicked()
{
    if (searchText().isEmpty()) {
        return;
    }

    emit replaceAllRequested(searchText(), replaceText(), isCaseSensitive(), isWholeWord());
}

void ReplaceDialog::onSearchTextChanged(const QString &text)
{
    const bool hasText = !text.isEmpty();
    ui->findNextButton->setEnabled(hasText);
    ui->replaceButton->setEnabled(hasText);
    ui->replaceAllButton->setEnabled(hasText);
}
