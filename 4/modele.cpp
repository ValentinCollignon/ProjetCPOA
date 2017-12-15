#include "modele.h"
#include "mainwindow.h"

Modele::Modele()
{

    nameCours="";
}

void Modele::addVue(MainWindow &v){

    vues.append(&v);
}

void Modele::maj()
{
    int i;
    std::cout <<vues.size()<< std::endl;

    for(i=0;i<vues.size();i++)
    {
        std::cout <<i<< std::endl;
        vues[i]->maj();
    }
}

void Modele::setNameCours(QString s)
{
    nameCours = s;
    this->maj();
}

QString Modele::getNameCours ()
{
    std::cout << nameCours.toStdString() << std::endl;

    return nameCours;
}
