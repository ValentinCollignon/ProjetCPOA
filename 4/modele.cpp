#include "modele.h"
#include "vue.h"

Modele::Modele()
{
}

void Modele::addVue(Vue &v){
    vues.append(&v);
    nameCours="";
}

void Modele::maj()
{
    int i;
    for(i=0;i<vues.size();i++)
    {
        vues[i]->maj();
    }
}

void Modele::setNameCours(QString s)
{
    nameCours = s;
    maj();
}

QString Modele::getNameCours ()
{
    return nameCours;
}
