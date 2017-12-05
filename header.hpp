#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

/* Liste des fonctions */
vector<string> split(string texte, char separateur);
bool dateValide(vector<int> date);
vector<int> resetInt(vector<int> tabDynamique);
vector<int> tabStringToInt(vector<string> tabString, vector<int> tabInt);
bool dateJuste(vector<int> date);
bool dateComparaison(vector<int> dateDeb, vector<int> dateFin);
string supprimerEspace(string texte);

/* Liste des classes */
class Cours
{
  string Nom;
  vector<int> DateDebut;
  vector<int> DateFin;
  string Description;
protected:
  Cours(){}
  Cours(string cours, vector<int> debut, vector<int> fin, string desc) : Nom(cours), DateDebut(debut), DateFin(fin), Description(desc) {}
public:
  virtual ~Cours() {}
  virtual string nom() { return Nom; }
};

#endif
