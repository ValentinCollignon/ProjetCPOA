#ifndef MODELE_H
#define MODELE_H

#include <QVector>
#include <QString>

class Vue;

class Modele
{
public:
    Modele();
    void addVue(Vue &v);
    void setNameCours(QString s);
    QString getNameCours();

private:
  QVector<Vue*> vues;
  QString nameCours;

  void maj();
};

#endif // MODELE_H
