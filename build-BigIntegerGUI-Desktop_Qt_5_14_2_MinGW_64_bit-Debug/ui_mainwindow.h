/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButtonExit;
    QLabel *labelFirst;
    QLabel *labelSecond;
    QLineEdit *lineEditFirst;
    QLineEdit *lineEditSecond;
    QLabel *labelResult;
    QGroupBox *groupBoxOperations;
    QGroupBox *groupBoxBinaryOperations;
    QPushButton *pushButtonPlus;
    QPushButton *pushButtonMinus;
    QPushButton *pushButtonMultiply;
    QPushButton *pushButtonDivision;
    QPushButton *pushButtonModulo;
    QGroupBox *groupBoxRelationalOperations;
    QPushButton *pushButtonGreater;
    QPushButton *pushButtonLess;
    QPushButton *pushButtonGreaterEqual;
    QPushButton *pushButtonLessEqual;
    QPushButton *pushButtonEqual;
    QPushButton *pushButtonNotEqual;
    QTextBrowser *textBrowserResult;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(740, 508);
        MainWindow->setDocumentMode(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButtonExit = new QPushButton(centralwidget);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(620, 430, 93, 28));
        labelFirst = new QLabel(centralwidget);
        labelFirst->setObjectName(QString::fromUtf8("labelFirst"));
        labelFirst->setGeometry(QRect(30, 20, 72, 15));
        labelSecond = new QLabel(centralwidget);
        labelSecond->setObjectName(QString::fromUtf8("labelSecond"));
        labelSecond->setGeometry(QRect(30, 80, 72, 15));
        lineEditFirst = new QLineEdit(centralwidget);
        lineEditFirst->setObjectName(QString::fromUtf8("lineEditFirst"));
        lineEditFirst->setGeometry(QRect(30, 40, 331, 31));
        lineEditSecond = new QLineEdit(centralwidget);
        lineEditSecond->setObjectName(QString::fromUtf8("lineEditSecond"));
        lineEditSecond->setGeometry(QRect(30, 100, 331, 31));
        labelResult = new QLabel(centralwidget);
        labelResult->setObjectName(QString::fromUtf8("labelResult"));
        labelResult->setGeometry(QRect(380, 20, 72, 15));
        groupBoxOperations = new QGroupBox(centralwidget);
        groupBoxOperations->setObjectName(QString::fromUtf8("groupBoxOperations"));
        groupBoxOperations->setGeometry(QRect(30, 160, 681, 261));
        groupBoxBinaryOperations = new QGroupBox(groupBoxOperations);
        groupBoxBinaryOperations->setObjectName(QString::fromUtf8("groupBoxBinaryOperations"));
        groupBoxBinaryOperations->setGeometry(QRect(20, 30, 311, 221));
        pushButtonPlus = new QPushButton(groupBoxBinaryOperations);
        pushButtonPlus->setObjectName(QString::fromUtf8("pushButtonPlus"));
        pushButtonPlus->setGeometry(QRect(40, 40, 93, 28));
        pushButtonMinus = new QPushButton(groupBoxBinaryOperations);
        pushButtonMinus->setObjectName(QString::fromUtf8("pushButtonMinus"));
        pushButtonMinus->setGeometry(QRect(180, 40, 93, 28));
        pushButtonMultiply = new QPushButton(groupBoxBinaryOperations);
        pushButtonMultiply->setObjectName(QString::fromUtf8("pushButtonMultiply"));
        pushButtonMultiply->setGeometry(QRect(40, 100, 93, 28));
        pushButtonDivision = new QPushButton(groupBoxBinaryOperations);
        pushButtonDivision->setObjectName(QString::fromUtf8("pushButtonDivision"));
        pushButtonDivision->setGeometry(QRect(180, 100, 93, 28));
        pushButtonModulo = new QPushButton(groupBoxBinaryOperations);
        pushButtonModulo->setObjectName(QString::fromUtf8("pushButtonModulo"));
        pushButtonModulo->setGeometry(QRect(110, 160, 93, 28));
        groupBoxRelationalOperations = new QGroupBox(groupBoxOperations);
        groupBoxRelationalOperations->setObjectName(QString::fromUtf8("groupBoxRelationalOperations"));
        groupBoxRelationalOperations->setGeometry(QRect(350, 30, 311, 221));
        pushButtonGreater = new QPushButton(groupBoxRelationalOperations);
        pushButtonGreater->setObjectName(QString::fromUtf8("pushButtonGreater"));
        pushButtonGreater->setGeometry(QRect(40, 40, 93, 28));
        pushButtonLess = new QPushButton(groupBoxRelationalOperations);
        pushButtonLess->setObjectName(QString::fromUtf8("pushButtonLess"));
        pushButtonLess->setGeometry(QRect(180, 40, 93, 28));
        pushButtonGreaterEqual = new QPushButton(groupBoxRelationalOperations);
        pushButtonGreaterEqual->setObjectName(QString::fromUtf8("pushButtonGreaterEqual"));
        pushButtonGreaterEqual->setGeometry(QRect(40, 100, 93, 28));
        pushButtonLessEqual = new QPushButton(groupBoxRelationalOperations);
        pushButtonLessEqual->setObjectName(QString::fromUtf8("pushButtonLessEqual"));
        pushButtonLessEqual->setGeometry(QRect(180, 100, 93, 28));
        pushButtonEqual = new QPushButton(groupBoxRelationalOperations);
        pushButtonEqual->setObjectName(QString::fromUtf8("pushButtonEqual"));
        pushButtonEqual->setGeometry(QRect(40, 160, 93, 28));
        pushButtonNotEqual = new QPushButton(groupBoxRelationalOperations);
        pushButtonNotEqual->setObjectName(QString::fromUtf8("pushButtonNotEqual"));
        pushButtonNotEqual->setGeometry(QRect(180, 160, 93, 28));
        textBrowserResult = new QTextBrowser(centralwidget);
        textBrowserResult->setObjectName(QString::fromUtf8("textBrowserResult"));
        textBrowserResult->setGeometry(QRect(380, 40, 331, 91));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 740, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\346\227\240\347\254\246\345\217\267\345\244\247\346\225\264\346\225\260\350\256\241\347\256\227\345\231\250", nullptr));
        pushButtonExit->setText(QCoreApplication::translate("MainWindow", "\351\200\200\345\207\272", nullptr));
        labelFirst->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\270\200\344\270\252\346\225\260\357\274\232", nullptr));
        labelSecond->setText(QCoreApplication::translate("MainWindow", "\347\254\254\344\272\214\344\270\252\346\225\260\357\274\232", nullptr));
        lineEditFirst->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        lineEditSecond->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        labelResult->setText(QCoreApplication::translate("MainWindow", "\347\273\223\346\236\234\357\274\232", nullptr));
        groupBoxOperations->setTitle(QCoreApplication::translate("MainWindow", "\346\223\215\344\275\234", nullptr));
        groupBoxBinaryOperations->setTitle(QCoreApplication::translate("MainWindow", "\346\225\260\345\200\274\350\277\220\347\256\227", nullptr));
        pushButtonPlus->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        pushButtonMinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        pushButtonMultiply->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        pushButtonDivision->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
        pushButtonModulo->setText(QCoreApplication::translate("MainWindow", "%", nullptr));
        groupBoxRelationalOperations->setTitle(QCoreApplication::translate("MainWindow", "\345\205\263\347\263\273\350\277\220\347\256\227", nullptr));
        pushButtonGreater->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        pushButtonLess->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        pushButtonGreaterEqual->setText(QCoreApplication::translate("MainWindow", "\342\211\245", nullptr));
        pushButtonLessEqual->setText(QCoreApplication::translate("MainWindow", "\342\211\244", nullptr));
        pushButtonEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        pushButtonNotEqual->setText(QCoreApplication::translate("MainWindow", "\342\211\240", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
