#include "aboutdialog.h"
#include "ui_aboutdialog.h"

#include <QIcon>
#include <QPixmap>
#include <QPushButton>

namespace {

// 图标加载：若已在 TextEditor.qrc 中加入 :/img/about.png，则优先使用它；
// 否则回退到工程已有的资源，保证任何情况下对话框都有图标可显示。
QPixmap loadLogoPixmap(int edge)
{
    QIcon icon(QStringLiteral(":/img/about.png"));
    if (icon.isNull())
        icon = QIcon(QStringLiteral(":/img/New.png"));
    return icon.pixmap(QSize(edge, edge));
}

} // namespace

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    // 去掉标题栏上的“?”上下文帮助按钮（Qt 6 推荐写法）
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);

    // 软件图标按固定边长等比缩放，避免大图把对话框撑开；居中显示由 ui 中的 alignment 负责
    ui->iconLabel->setPixmap(loadLogoPixmap(64));

    // OK 按钮只负责关闭对话框；返回值沿用 QDialog::Accepted。
    // 按 Esc 关闭由 QDialog 自身的 reject() 处理，无需额外代码。
    connect(ui->okButton, &QPushButton::clicked, this, &QDialog::accept);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
