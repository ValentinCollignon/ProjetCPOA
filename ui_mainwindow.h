/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_4;
    QFrame *line_2;
    QLabel *label_5;
    QFrame *line_3;
    QFrame *line;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 100, 791, 451));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        lineEdit_3 = new QLineEdit(page_2);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(320, 130, 291, 27));
        lineEdit_2 = new QLineEdit(page_2);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(320, 90, 291, 27));
        textEdit = new QTextEdit(page_2);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(320, 180, 291, 181));
        label_4 = new QLabel(page_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(160, 170, 161, 31));
        line_2 = new QFrame(page_2);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(160, 270, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_5 = new QLabel(page_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(160, 340, 121, 31));
        line_3 = new QFrame(page_2);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(263, 270, 31, 91));
        line_3->setFrameShape(QFrame::VLine);
        line_3->setFrameShadow(QFrame::Sunken);
        line = new QFrame(page_2);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(160, 155, 471, 31));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(page_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 130, 131, 21));
        lineEdit = new QLineEdit(page_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(320, 50, 291, 27));
        label = new QLabel(page_2);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 50, 101, 21));
        pushButton = new QPushButton(page_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 300, 99, 27));
        label_2 = new QLabel(page_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(160, 90, 121, 21));
        stackedWidget->addWidget(page_2);
        line_3->raise();
        lineEdit_2->raise();
        lineEdit_3->raise();
        label_4->raise();
        textEdit->raise();
        label_5->raise();
        line_2->raise();
        line->raise();
        label_3->raise();
        lineEdit->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        lineEdit_3->raise();
        lineEdit_2->raise();
        textEdit->raise();
        label_4->raise();
        line_2->raise();
        label_5->raise();
        line_3->raise();
        line->raise();
        label_3->raise();
        lineEdit->raise();
        label->raise();
        pushButton->raise();
        label_2->raise();
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(0, 50, 99, 27));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 50, 111, 27));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(240, 50, 99, 27));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(340, 50, 99, 27));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(440, 50, 99, 27));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(540, 50, 99, 27));
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(640, 50, 99, 27));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_4->setText(QApplication::translate("MainWindow", "Description * :", 0));
        label_5->setText(QApplication::translate("MainWindow", "* obligatiore", 0));
        label_3->setText(QApplication::translate("MainWindow", "Date de fin * :", 0));
        label->setText(QApplication::translate("MainWindow", "Nom * :", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Envoyer", 0));
        label_2->setText(QApplication::translate("MainWindow", "Date de debut * :", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "accueil", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "ajout de cours", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
