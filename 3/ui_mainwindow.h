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
    QLabel *label_10;
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
    QWidget *page_3;
    QLabel *label_6;
    QWidget *page_4;
    QLabel *label_7;
    QWidget *page_5;
    QLabel *label_8;
    QWidget *page_6;
    QLabel *label_9;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(742, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 100, 711, 451));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        label_10 = new QLabel(page);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(150, 36, 441, 381));
        label_10->setLayoutDirection(Qt::LeftToRight);
        label_10->setAlignment(Qt::AlignCenter);
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
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        label_6 = new QLabel(page_3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(190, 20, 461, 31));
        stackedWidget->addWidget(page_3);
        page_4 = new QWidget();
        page_4->setObjectName(QStringLiteral("page_4"));
        label_7 = new QLabel(page_4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(340, 20, 201, 17));
        stackedWidget->addWidget(page_4);
        page_5 = new QWidget();
        page_5->setObjectName(QStringLiteral("page_5"));
        label_8 = new QLabel(page_5);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(330, 10, 171, 17));
        stackedWidget->addWidget(page_5);
        page_6 = new QWidget();
        page_6->setObjectName(QStringLiteral("page_6"));
        label_9 = new QLabel(page_6);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(350, 30, 171, 17));
        stackedWidget->addWidget(page_6);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(20, 50, 99, 27));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(130, 50, 111, 27));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(250, 50, 111, 27));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(370, 50, 131, 27));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(510, 50, 99, 27));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(620, 50, 99, 27));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(5);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label_10->setText(QApplication::translate("MainWindow", "Accueil", 0));
        label_4->setText(QApplication::translate("MainWindow", "Description * :", 0));
        label_5->setText(QApplication::translate("MainWindow", "* obligatiore", 0));
        label_3->setText(QApplication::translate("MainWindow", "Date de fin * :", 0));
        label->setText(QApplication::translate("MainWindow", "Nom * :", 0));
        pushButton->setText(QApplication::translate("MainWindow", "Envoyer", 0));
        label_2->setText(QApplication::translate("MainWindow", "Date de debut * :", 0));
        label_6->setText(QApplication::translate("MainWindow", "Liste des cours", 0));
        label_7->setText(QApplication::translate("MainWindow", "Cours en attente", 0));
        label_8->setText(QApplication::translate("MainWindow", "Connexion", 0));
        label_9->setText(QApplication::translate("MainWindow", "Inscription", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "Accueil", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "Ajout de cours", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "Liste des cours", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "Cours en Attente", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "Connexion", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "Inscription", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
