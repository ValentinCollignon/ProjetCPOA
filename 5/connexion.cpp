#include "connexion.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  vector<Utilisateur> tab;
  tab.push_back(Utilisateur("Bernard", "1234", 1));
  tab.push_back(Utilisateur("Pierre", "soleil", 1));

  string login, password;
  bool again = false;

  do
  {
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
  while (!again);
  
  
  
}
