#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
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
