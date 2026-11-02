#include "aboutdialog.h"
#include "ui_aboutdialog.h"

#include <QIcon>
#include <QPixmap>
#include <QPushButton>

namespace {


QPixmap loadLogoPixmap(int edge)
{
    QIcon icon(QStringLiteral(":/img/about.png"));
    return icon.pixmap(QSize(edge, edge));
}

}

AboutDialog::AboutDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AboutDialog)
{
    ui->setupUi(this);

    // 去掉标题栏上的“?”上下文帮助按钮
    setWindowFlag(Qt::WindowContextHelpButtonHint, false);

    // 软件图标按固定边长等比缩放，避免大图把对话框撑开；居中显示由 ui 中的 alignment 负责
    ui->iconLabel->setPixmap(loadLogoPixmap(64));

    connect(ui->okButton, &QPushButton::clicked, this, &QDialog::accept);
}

AboutDialog::~AboutDialog()
{
    delete ui;
}
