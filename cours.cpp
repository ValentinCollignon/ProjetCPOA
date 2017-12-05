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
};
