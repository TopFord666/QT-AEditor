#ifndef REPLACEDIALOG_H
#define REPLACEDIALOG_H

#include <QDialog>
#include <QString>

QT_BEGIN_NAMESPACE
namespace Ui {
class ReplaceDialog;
}
QT_END_NAMESPACE

// 替换对话框：独立的窗口类，父类为 QDialog。
// 只负责收集“查找/替换内容 + 选项 + 方向”，并通过信号把请求交给调用方；
// 不引用 MainWindow 的任何成员，也不实现任何查找/替换算法，便于后续接入真正的替换功能。
class ReplaceDialog : public QDialog
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
    explicit ReplaceDialog(QWidget *parent = nullptr);
    ~ReplaceDialog() override;

    // 读取当前条件（也可直接使用信号参数）
    QString searchText() const;
    QString replaceText() const;
    bool isCaseSensitive() const;
    bool isWholeWord() const;
    Direction direction() const;

signals:
    // 点击“查找下一个”
    void findNextRequested(const QString &text, bool caseSensitive,
                           bool wholeWord, ReplaceDialog::Direction direction);

    // 点击“替换”（替换当前匹配项）
    void replaceRequested(const QString &text, const QString &replacement, bool caseSensitive,
                          bool wholeWord, ReplaceDialog::Direction direction);

    // 点击“全部替换”（整篇替换，与方向无关）
    void replaceAllRequested(const QString &text, const QString &replacement,
                             bool caseSensitive, bool wholeWord);

protected:
    // 每次显示时把焦点交给“查找内容”并全选，方便直接输入新的关键字
    void showEvent(QShowEvent *event) override;

private slots:
    void onFindNextClicked();
    void onReplaceClicked();
    void onReplaceAllClicked();
    void onSearchTextChanged(const QString &text);

private:
    Ui::ReplaceDialog *ui;
};

#endif // REPLACEDIALOG_H
