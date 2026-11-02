#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "aboutdialog.h"

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

