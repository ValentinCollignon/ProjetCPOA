#include "menu.hpp"

using namespace std;
/**
 * \file      menu.cpp
 * \author    COLLIGNON LOSSON FOUSSE
 * \version   0.1
 * \date      11/12/2017
 * \brief     Début de l'appli.
 *
 * \details   Créé un menu de l'application sous terminale
 */
int main()
{
  string rep;
  
  do
  {
    cout << endl << "Bienvenue sur Arch" << endl << endl;
    cout << "Que voulez-vous faire ?" << endl;
    cout << "1 - Connexion" << endl;
    cout << "2 - Proposer un cours" << endl;
    cout << "3 - Visualiser les cours en attente" << endl;
    cout << "4 - Voir les cours disponibles" << endl;
    cout << "0 - Quitter" << endl;
  
    getline(cin, rep);
    if (rep == "1")
    {
      cout << "Connexion" << endl << endl;
    }
    else if (rep == "2")
    {
      switch (fork())
      {
        case (pid_t) -1 :
	  perror("Creation du fils impossible !\n");
	  exit(EXIT_FAILURE);
        case (pid_t) 0 :
	  execl("./proposer_cours", "./proposer_cours", NULL);
	  perror("Recouvrement impossible !");
	  exit(EXIT_FAILURE);
        default:
	  wait(NULL);
      }
    }
    else if (rep == "3")
    {
      cout << "Voilà" << endl << endl;
    }
    else if (rep == "4")
    {
      cout << "Tada" << endl << endl;
    }
    else if (rep == "0")
    {
      cout << "Au revoir" << endl << endl;
    }
    else
    {
      cout << "Mauvais choix" << endl << endl;
    }
  }
  while (rep != "0");
  
  return EXIT_SUCCESS;
}
