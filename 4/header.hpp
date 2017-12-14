#ifndef HEADER_H
#define HEADER_H

#include <stdlib.h>
#include <stdio.h>
#include <ctime>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

/* Liste des fonctions */
std::vector<std::string> split(std::string texte, char separateur);
bool dateValide(std::vector<int> date);
std::vector<int> resetInt(std::vector<int> tabDynamique);
std::vector<int> tabStringToInt(std::vector<std::string> tabString, std::vector<int> tabInt);
bool dateJuste(std::vector<int> date);
bool dateComparaison(std::vector<int> dateDeb, std::vector<int> dateFin);
std::string supprimerEspace(std::string texte);

#endif
