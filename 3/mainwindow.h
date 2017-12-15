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
        void ajoutcours();
        void acceuil() ;
        void listeCours();
        void coursAttente();
        void Conncexion();
        void inscription();

private:
    Ui::MainWindow *ui;
    int i;


};

#endif // MAINWINDOW_H
