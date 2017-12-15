#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(acceuil()));
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(ajoutcours()));
    i=0;
}

void MainWindow::addModele(Modele &m)
{
    modele=m;
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

void MainWindow::maj()
{
    std::cout << modele.getNameCours().toStdString() << std::endl;
    ui->nameCours->setText(modele.getNameCours());
}

void MainWindow::on_test_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);

}

void MainWindow::on_pushButton_clicked()
{
    std::cout << ui->lineEdit->text().toStdString() << std::endl;
    modele.setNameCours(ui->lineEdit->text());
}

MainWindow::~MainWindow()
{
    delete ui;
}
