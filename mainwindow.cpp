#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "aboutdialog.h"
#include "finddialog.h"
#include "replacedialog.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    statusLabel.setMaximumWidth(300);
    statusLabel.setText("Length:"+QString::number(0)+"  Lines:"+QString::number(1));
    ui->statusbar->addPermanentWidget(&statusLabel);

    statusCursorLabel.setMaximumWidth(300);
    statusCursorLabel.setText("Ln:"+QString::number(0)+"  Col:"+QString::number(1));
    ui->statusbar->addPermanentWidget(&statusCursorLabel);

    QLabel *author = new QLabel(ui->statusbar);
    author->setText(tr("曾谞炫"));
    ui->statusbar->addPermanentWidget(author);
}

MainWindow::~MainWindow()
{
    delete ui;
}

// 关于窗口
void MainWindow::on_actionAbout_triggered()
{
    // 以主窗口为父窗口、模态方式显示；对话框关闭后自动析构，不影响主窗口业务
    AboutDialog dialog(this);
    dialog.exec();
}

//查找窗口
void MainWindow::on_actionFind_triggered()
{
    // 非模态对话框：首次打开时创建，之后复用同一实例；
    // 关闭（取消/标题栏关闭）只是隐藏，主窗口可继续编辑文本。
    if (!findDialog) {
        findDialog = new FindDialog(this);
    }


    findDialog->show();
    findDialog->raise();
    findDialog->activateWindow();
}

//替换窗口
void MainWindow::on_actionReplace_triggered()
{
    // 与查找窗口一致：非模态、延迟创建、复用同一实例
    if (!replaceDialog) {
        replaceDialog = new ReplaceDialog(this);
    }

    replaceDialog->show();
    replaceDialog->raise();
    replaceDialog->activateWindow();
}

