#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class FindDialog;    // 查找对话框（非模态，复用同一实例）
class ReplaceDialog; // 替换对话框（非模态，复用同一实例）

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow() override;

private slots:
    void on_actionAbout_triggered();
    void on_actionFind_triggered();

    void on_actionReplace_triggered();

private:
    Ui::MainWindow *ui;

    // 查找对话框延迟创建，关闭时只是隐藏，下次打开保留上次输入
    FindDialog *findDialog = nullptr;
    // 替换对话框同样延迟创建并复用
    ReplaceDialog *replaceDialog = nullptr;

    QLabel statusCursorLabel;
    QLabel statusLabel;
};
#endif // MAINWINDOW_H
