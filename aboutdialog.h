#ifndef ABOUTDIALOG_H
#define ABOUTDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class AboutDialog;
}
QT_END_NAMESPACE

// 关于对话框：独立的窗口类，父类为 QDialog。
// 只负责展示软件信息，不持有也不访问 MainWindow 的任何成员，便于后续单独复用。
class AboutDialog : public QDialog
{
    Q_OBJECT

public:
    // parent 仅用于确定归属与居中显示，可为 nullptr
    explicit AboutDialog(QWidget *parent = nullptr);
    ~AboutDialog() override;

private:
    Ui::AboutDialog *ui;
};

#endif // ABOUTDIALOG_H
