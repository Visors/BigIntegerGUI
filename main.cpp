#include "mainwindow.h" // 引入编写好的主窗口类

#include <QApplication> // 引入QT库

int main(int argc, char *argv[])
{
    QApplication a(argc, argv); // 构造QT应用a
    MainWindow w; // 声明主窗口类实例w
    w.setWindowIcon(QIcon("icon.ico")); // 为w设置图标icon.ico
    w.show(); // 显示w
    return a.exec(); // 运行QT应用并返回状态码
}
