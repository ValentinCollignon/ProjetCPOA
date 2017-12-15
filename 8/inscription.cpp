#include "connexion.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  vector<Utilisateur> tab;
  string login, pseudo, pass, password, status;
  int rang, grade;
  bool succes = true;

  cout << "Inscription" << endl;
  cout << "Identifiant : ";
  getline(cin, login);
  cout << "Mot de passe : ";
  getline(cin, password);
  do
  {
    cout << "Etes-vous un étudiant (1), un Professeur (2) ou les deux (3) ? ";
    getline(cin, status);
  }
  while (status != "1" && status != "2" && status != "3");
  if (status == "1")
  {
    grade = 1;
  }
  else if (status == "2")
  {
    grade = 2;
  }
  else if (status == "3")
  {
    grade = 3;
  }


  ifstream fichier("../compte.txt", ios::in);
  if (fichier)
  {
    while (!fichier.eof())
    {
      fichier >> pseudo >> pass >> rang;
      tab.push_back(Utilisateur(pseudo, pass, rang));
    }
    tab.pop_back(); //On delete une case du tableau car on avait 2fois la derniere ligne
    fichier.close();
  }

  ofstream ecriture("../compte.txt", ios::out | ios::app);
  if(ecriture)
  {
    for (unsigned int i = 0 ; i < tab.size() ; i++)
    {
      if (tab[i].getPseudo() == login)
      {
	succes = false;
      }
    }
    if (succes)
    {
      ecriture << login << " " << password << " " << grade << endl;; 
      tab.push_back(Utilisateur(login, password, grade));
      cout << "Vous etes dorénavant inscrit sur Arch." << endl;
    }
    else
    {
      cout << "Erreur lors de l'inscription, identifiant déjà utilisé." << endl;
    }
    ecriture.close();
  }
  
  
}
