#include "cours.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  vector<Cours> tab;
  string rep;

  cout << "Voici la liste des cours en attente :" << endl;
  ifstream fichier("../cours_attente.txt", ios::in);
  if (fichier)
  {
    string ligne;
    vector<string> contenu, debut, fin;
    vector<int> debutInt, finInt;
    while (getline(fichier, ligne))
    {
      contenu = split(ligne, '\\');
      debut = split(contenu[1], ' ');
      debutInt = tabStringToInt(debut, debutInt);
      fin = split(contenu[2], ' ');
      finInt = tabStringToInt(fin, finInt);
      tab.push_back(Cours(contenu[0], debutInt, finInt, contenu[3]));
    }
    for (unsigned int i = 0 ; i < tab.size() ; i++)
    {
      cout << i+1 <<" - " << tab[i].getNom() << endl;
    }
    fichier.close();
  }
  
  getline(cin, rep);




}
