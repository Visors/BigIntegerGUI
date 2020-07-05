#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BigInteger.h"
#include <QString>
#include <string>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(windowFlags()&~Qt::WindowMaximizeButtonHint); // 禁止最大化按钮
    setFixedSize(this->width(), this->height()); // 禁止拖动改变窗口大小
    ui->textBrowserResult->setReadOnly(true); // 输出框只读
    ui->lineEditFirst->setAlignment(Qt::AlignRight); // 设置第一个数输入框内容居右显示
    ui->lineEditSecond->setAlignment(Qt::AlignRight); // 设置第二个数输入框内容居右显示
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButtonExit_clicked()
{
    close();
}

/* 二元运算逻辑
 * Qt控件只支持QString的输入输出
 * 声明两个BigInteger类进行二元运算
 * 我们给封装好的BigInteger编写一个toString函数，将结果转化为string类
 * 再使用Qt内置函数将string转为QString输出
 */

void MainWindow::on_pushButtonPlus_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    std::string result = (a+b).toString();
    QResult = QString::fromStdString(result);
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonMinus_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    std::string result = (a-b).toString();
    QResult = QString::fromStdString(result);
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonMultiply_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    std::string result = (a*b).toString();
    QResult = QString::fromStdString(result);
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonDivision_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    std::string result = (a/b).toString();
    QResult = QString::fromStdString(result);
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonModulo_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    std::string result = (a%b).toString();
    QResult = QString::fromStdString(result);
    ui->textBrowserResult->setText(QResult);
}

/* 关系运算逻辑
 * Qt控件只支持QString的输入输出
 * 声明两个BigInteger类进行关系运算
 * 我们给封装好的BigInteger编写一个toString函数，将结果转化为string类
 * 如果string值为"1"，我们调用构造函数将QString类的QResult设为"True"
 * 如果string值为"0"，我们调用构造函数将QString类的QResult设为"False"
 */

void MainWindow::on_pushButtonGreater_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a > b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonLess_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a < b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonGreaterEqual_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a >= b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonLessEqual_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a <= b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonEqual_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a == b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}

void MainWindow::on_pushButtonNotEqual_clicked()
{
    QString QFirst = ui->lineEditFirst->text();
    QString QSecond = ui->lineEditSecond->text();
    QString QResult;
    std::string first = QFirst.toStdString();
    std::string second = QSecond.toStdString();
    BigInteger a(first);
    BigInteger b(second);
    bool result = (a != b);
    if(result) QResult = QString("True");
    else QResult = QString("False");
    ui->textBrowserResult->setText(QResult);
}
