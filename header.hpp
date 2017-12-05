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

vector<string> split(string texte, char separateur);
bool dateValide(vector<int> date);
vector<int> resetInt(vector<int> tabDynamique);
vector<int> tabStringToInt(vector<string> tabString, vector<int> tabInt);
bool dateJuste(vector<int> date);
bool dateComparaison(vector<int> dateDeb, vector<int> dateFin);
string supprimeEspace(string texte);

#endif
