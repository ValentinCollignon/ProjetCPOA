#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "modele.h"

namespace Ui {
class MainWindow ;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    void maj();
    void addModele(Modele& m);
    ~MainWindow();

private slots:
        void test();
        void ajoutcours();
        void acceuil() ;

        void on_test_clicked();

        void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
    Modele modele;
    int i;


};

#endif // MAINWINDOW_H
