#include "header.hpp"
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

string Cours::toString() const
{
  string res = "Vous avez créé le cours "+nom+" qui commence le "+dateDebut[0]+"/"+dateDebut[1]+"/"dateDebut[2]+" et termine le "+dateFin[0]+"/"+dateFin[1]+"/"+dateFin[2]+". ";
  if (description != "")
  {
    res += description;
  }
  return res;
}
;
