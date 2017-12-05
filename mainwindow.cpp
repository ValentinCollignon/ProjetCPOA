#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton, SIGNAL(clicked()), this, SLOT(test()));
}



void MainWindow::test()
{
    std::cout<< "ok !!!!!" << std::endl;
}

MainWindow::~MainWindow()
{
    delete ui;

}
