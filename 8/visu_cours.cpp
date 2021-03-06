#include "cours.hpp"
using namespace std;

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
    for (unsigned int i = 0 ; i < tab.size() ; i++)
    {
      cout << tab[i].getNom() << endl;
    }
    cout << "Lequel voulez-vous voir ?" << endl;
    getline(cin, ligne);
    for (unsigned int i = 0 ; i < tab.size() ; i++)
    {
      if (ligne == tab[i].getNom())
      {
	cout << tab[i].toString() << endl;
      }
    }
  }
}
