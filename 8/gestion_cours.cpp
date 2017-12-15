#include "cours.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  vector<Cours> tab;
  string rep;
  int numero;

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
      cout << tab[i].getNom() << endl;
    }
    fichier.close();
  }

  cout << "Veuillez choisir un cours pour obtenir ses détails. " << endl;
  getline(cin, rep); //Il faut taper le nom du cours
  for (unsigned int i = 0 ; i < tab.size() ; i++)
  {
    if (rep == tab[i].getNom())
    {
      numero = i;
    }
  }
  cout << "Vous avez choisi le cours " << tab[numero].getNom() << ". Voici les détails de ce cours : " << endl << tab[numero].toString() << endl;

  cout << "Voulez vous accepter (A) ou refuser (R) ce cours ?" << endl;
  getline(cin, rep);
  if (rep == "A")
  {
    ofstream ecriture("../cours.txt", ios::out | ios::app);
    if(ecriture)
    {
      ecriture << tab[numero].getNom() << "\\" << (tab[numero].getDebut())[0] << " " << (tab[numero].getDebut())[1] << " " << (tab[numero].getDebut())[2] << "\\" << (tab[numero].getFin())[0] << " " << (tab[numero].getFin())[1] << " " << (tab[numero].getFin())[2] << "\\" << tab[numero].getDescription() << endl;
      cout << "Le cours a été accepté, il est désormais visible par les étudiants." << endl;

      tab.erase(tab.begin()+numero);
      ofstream ecrit("../cours_attente.txt", ios::out | ios::trunc);
      if(ecrit)
      {
	for(unsigned int i = 0 ; i < tab.size() ; i++)
	{
	  ecrit << tab[i].getNom() << "\\" << (tab[i].getDebut())[0] << " " << (tab[i].getDebut())[1] << " " << (tab[i].getDebut())[2] << "\\" << (tab[i].getFin())[0] << " " << (tab[i].getFin())[1] << " " << (tab[i].getFin())[2] << "\\" << tab[i].getDescription() << endl;
	}
      }
      ecrit.close();
    }
    ecriture.close();
  }
  else if (rep == "R")
  {
    tab.erase(tab.begin()+numero);
    ofstream ecrit("../cours_attente.txt", ios::out | ios::trunc);
    if(ecrit)
    {
      for(unsigned int i = 0 ; i < tab.size() ; i++)
      {
	ecrit << tab[i].getNom() << "\\" << (tab[i].getDebut())[0] << " " << (tab[i].getDebut())[1] << " " << (tab[i].getDebut())[2] << "\\" << (tab[i].getFin())[0] << " " << (tab[i].getFin())[1] << " " << (tab[i].getFin())[2] << "\\" << tab[i].getDescription() << endl;
      }
    }
    ecrit.close();
    cout << "Le cours a été refusé, il a été supprimé." << endl;
  }
}
