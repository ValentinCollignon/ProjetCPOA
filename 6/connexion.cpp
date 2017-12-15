#include "connexion.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  vector<Utilisateur> tab;
  string login, password;
  bool again = false;

  ifstream fichier("../compte.txt", ios::in);
  if (fichier)
  {
    string contenu, pseudo, pass;
    int rang;
    while (!fichier.eof())
    {
      fichier >> pseudo >> pass >> rang;
      tab.push_back(Utilisateur(pseudo, pass, rang));
    }
    tab.pop_back(); //On delete une case du tableau car on avait 2fois la derniere ligne
    fichier.close();
  }

  cout << "Connexion" << endl;
  cout << "Identifiant : ";
  getline(cin, login);
  cout << "Mot de passe : ";
  getline(cin, password);
  for(unsigned int i = 0 ; i < tab.size() ; i++)
  {
    if(login == tab[i].getPseudo() && password == tab[i].getPassword())
    {
      again = true;
    }
  }
  if(!again)
  {
    cout << "Identifiant et/ou mot de passe invalide" << endl;
  }
  else
  {
    cout << "Bienvenue " << login << " !" << endl;
  }
  
  
  
}
