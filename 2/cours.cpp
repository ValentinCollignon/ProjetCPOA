#include "cours.hpp"
using namespace std;
/**
 * \file      cours.cpp
 * \author    COLLIGNON LOSSON FOUSSE
 * \version   0.1
 * \date      11/12/2017
 * \brief     Objet cours
 *
 * \details   Classe qui regroupe tous les paramètres d'un cours.
 */

Cours::Cours()
{
}

Cours::Cours(string cours, vector<int> debut, vector<int> fin, string desc) : nom(cours), dateDebut(debut), dateFin(fin), description(desc)
{
}

Cours::~Cours()
{
}
/**
 * \brief     Donne le nom d'un cours
 * \return    le \e string étant le nom du cours 
 */
string Cours::getNom() const
{
  return nom;
}

/**
 * \brief     Transforme un cours en \e string
 * \return    le cours sous forme de \e string
 */
string Cours::toString() const
{
  stringstream sstm;
  sstm << "Vous avez créé le cours " << nom << " qui commence le " << dateDebut[0] << "/" << dateDebut[1] << "/" << dateDebut[2] << " et termine le " << dateFin[0] << "/" << dateFin[1] << "/" << dateFin[2] << ". ";
  if (description != "")
  {
    sstm << "La description du cours est : " << description;
  }
  
  return sstm.str();
}
;
