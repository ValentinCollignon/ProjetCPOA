#ifndef VUE_H
#define VUE_H

#include "modele.h"
class Vue
{
public:
    Vue();
    virtual void maj() = 0;
    void addModele(Modele& m);
protected:
    Modele modele;

};

#endif // VUE_H
