#include "cours.hpp"
using namespace std;

Cours::Cours()
{
}

Cours::Cours(string cours, vector<int> debut, vector<int> fin, string desc) : nom(cours), dateDebut(debut), dateFin(fin), description(desc)
{
}

Cours::~Cours()
{
}

string Cours::getNom() const
{
  return nom;
}

vector<int> Cours::getDebut() const
{
  return dateDebut;
}

vector<int> Cours::getFin() const
{
  return dateFin;
}

string Cours::getDescription() const
{
  return description;
}

string Cours::toString() const
{
  stringstream sstm;
  sstm << "Le cours " << nom << " commence le " << dateDebut[0] << "/" << dateDebut[1] << "/" << dateDebut[2] << " et termine le " << dateFin[0] << "/" << dateFin[1] << "/" << dateFin[2] << ". ";
  if (description != "")
  {
    sstm << "La description de ce cours est : " << description;
  }
  
  return sstm.str();
}
;
