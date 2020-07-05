#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButtonExit_clicked(); // 退出按钮点击事件

    void on_pushButtonPlus_clicked(); // +按钮点击事件

    void on_pushButtonMinus_clicked(); // -按钮点击事件

    void on_pushButtonMultiply_clicked(); // *按钮点击事件

    void on_pushButtonDivision_clicked(); // /按钮点击事件

    void on_pushButtonModulo_clicked(); // %按钮点击事件

    void on_pushButtonGreater_clicked(); // >按钮点击事件

    void on_pushButtonLess_clicked(); // <按钮点击事件

    void on_pushButtonGreaterEqual_clicked(); // ≥按钮点击事件

    void on_pushButtonLessEqual_clicked(); // ≤按钮点击事件

    void on_pushButtonEqual_clicked(); // =按钮点击事件

    void on_pushButtonNotEqual_clicked(); // ≠按钮点击事件

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
