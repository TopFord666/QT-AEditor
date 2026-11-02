#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QDialog>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class FindDialog;
}
QT_END_NAMESPACE

// 查找对话框：独立的窗口类，父类为 QDialog。
// 只负责收集“查找内容/选项/方向”等条件，并通过 searchRequested() 通知调用方；
// 不引用 MainWindow 的任何成员，也不实现任何查找算法，便于后续接入真正的搜索功能。
class FindDialog : public QDialog
{
    Q_OBJECT

public:
    // 查找方向
    enum class Direction {
        Forward,  // 向下（朝文末）
        Backward  // 向上（朝文首）
    };
    Q_ENUM(Direction)

    // parent 仅用于确定归属与居中显示，可为 nullptr
    explicit FindDialog(QWidget *parent = nullptr);
    ~FindDialog() override;

    // 读取当前查找条件（也可直接使用 searchRequested 的信号参数）
    QString searchText() const;
    bool isCaseSensitive() const;
    bool isWholeWord() const;
    Direction direction() const;

signals:
    // 用户点击“查找下一个”时发出，携带本次查找条件；
    // 后续实现查找功能时，在主窗口里 connect 该信号即可，无需改动本类。
    void searchRequested(const QString &text, bool caseSensitive,
                         bool wholeWord, FindDialog::Direction direction);

protected:
    // 每次显示时把焦点交给输入框并全选，方便直接输入新的关键字
    void showEvent(QShowEvent *event) override;

private slots:
    void onFindNextClicked();
    void onSearchTextChanged(const QString &text);

private:
    Ui::FindDialog *ui;
};

#endif // FINDDIALOG_H
