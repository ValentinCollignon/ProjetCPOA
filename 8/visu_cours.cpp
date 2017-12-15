#include "cours.hpp"
using namespace stp;

int main(int argc, char** argv)
{
  cout << "Voici la liste des cours disponibles :" << endl;
  vector<Cours> tab;
  ifstream fichier("../cours.txt");
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
    fichier.close();
    for (int i = 0 ; i < tab.size() ; i++)
    {
      cout << i+1 << " - " << tab[i].getNom() << endl;
    }
    
  }
}
