#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(test()));
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(acceuil()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(ajoutcours()));
    i=0;
}



void MainWindow::test()
{
    if (i == 0){
       i++;
    }else{
        i--;
    }
    ui->stackedWidget->setCurrentIndex(i);
}

void MainWindow::acceuil()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::ajoutcours()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void Vue::maj()
{

}

MainWindow::~MainWindow()
{
    delete ui;

}
