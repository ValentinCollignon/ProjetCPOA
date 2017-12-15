#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
/**
 * \file      cours.hpp
 * \author    COLLIGNON LOSSON FOUSSE
 * \version   0.1
 * \date      11/12/2017
 * \brief     header de cours.cpp  et function.cpp
 *
 */

/* Liste des fonctions */
std::vector<std::string> split(std::string texte, char separateur);
bool dateValide(std::vector<int> date);
std::vector<int> resetInt(std::vector<int> tabDynamique);
std::vector<int> tabStringToInt(std::vector<std::string> tabString, std::vector<int> tabInt);
bool dateJuste(std::vector<int> date);
bool dateComparaison(std::vector<int> dateDeb, std::vector<int> dateFin);
std::string supprimerEspace(std::string texte);

/* Liste des classes */
class Cours
{
private:
  std::string nom;
  std::vector<int> dateDebut;
  std::vector<int> dateFin;
  std::string description;
protected:
  
public:
  Cours();
  Cours(std::string cours, std::vector<int> debut, std::vector<int> fin, std::string desc);
  ~Cours();
  std::string getNom() const;
  std::string toString() const;
};

#endif
