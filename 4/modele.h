#ifndef MODELE_H
#define MODELE_H

#include <QVector>
#include <QString>

class MainWindow;

class Modele
{
public:
    Modele();
    void addVue(MainWindow &v);
    void setNameCours(QString s);
    QString getNameCours();

private:

  QVector<MainWindow*> vues;
  QString nameCours;

  void maj();
};

#endif // MODELE_H
