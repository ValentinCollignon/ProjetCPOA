#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include "vue.h"

namespace Ui {
class MainWindow ;
}

class MainWindow : public QMainWindow, public Vue
{
    Q_OBJECT


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
        void test();
        void ajoutcours();
        void acceuil() ;

private:
    Ui::MainWindow *ui;
    int i;


};

#endif // MAINWINDOW_H
