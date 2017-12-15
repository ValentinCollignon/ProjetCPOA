#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(acceuil()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(ajoutcours()));
    connect(ui->pushButton_4,SIGNAL(clicked()),this,SLOT(listeCours()));
    connect(ui->pushButton_5,SIGNAL(clicked()),this,SLOT(coursAttente()));
    connect(ui->pushButton_6,SIGNAL(clicked()),this,SLOT(Conncexion()));
    connect(ui->pushButton_7,SIGNAL(clicked()),this,SLOT(inscription()));
    i=0;
}





void MainWindow::acceuil()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::ajoutcours()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::listeCours()
{
    ui->stackedWidget->setCurrentIndex(2);
}

void MainWindow::coursAttente()
{
    ui->stackedWidget->setCurrentIndex(3);
}

void MainWindow::Conncexion()
{
    ui->stackedWidget->setCurrentIndex(4);
}

void MainWindow::inscription()
{
    ui->stackedWidget->setCurrentIndex(5);
}
MainWindow::~MainWindow()
{
    delete ui;

}
