#include "menu.hpp"

using namespace std;

int main()
{
  string rep;
  int rang = 0;
  bool admin = false, prof = false, etud = false;
  
  do
  {
    cout << endl << "Bienvenue sur Arch" << endl << endl;
    cout << "Que voulez-vous faire ?" << endl;
    if (rang == 0)
    {
      cout << "1 - Connexion" << endl;
      cout << "2 - Inscription" << endl;
    }
    else
    {
      int t = rang;
      if (t - ADMIN >= 0)
      {
	admin = true;
	t -= ADMIN;
      }
      if (t - PROF >= 0)
      {
	prof = true;
	t -= PROF;
      }
      if (t - ETUD >= 0)
      {
	etud = true;
      }
    }
    if (admin)
    {
      cout << "3 - Visualiser les cours en attente" << endl;
    }
    if (prof)
    {
      cout << "4 - Proposer un cours" << endl;
    }
    if (etud)
    {
      cout << "5 - Voir les cours disponibles" << endl;
    }
    if (rang != 0)
    {
      cout << "6 - Déconnexion" << endl;
    }
    cout << "0 - Quitter" << endl;
  
    getline(cin, rep);
    if (rep == "1" && rang == 0)
    {
      int ret;
      switch (fork())
      {
        case (pid_t) -1 :
	  perror("Creation du fils impossible !\n");
        case (pid_t) 0 :
	  execl("./connexion", "./connexion", NULL);
	  perror("Recouvrement impossible !");
        default:
	  wait(&ret);
      }
      if (WIFEXITED(ret))
      {
	rang = WEXITSTATUS(ret);
      }
    }
    else if (rep == "2" && rang == 0)
    {
      cout << "Inscription" << endl << endl;
    }
    else if (rep == "3" && admin)
    {
      cout << "Voilà" << endl << endl;
    }
    else if (rep == "4" && prof)
    {
      switch (fork())
      {
        case (pid_t) -1 :
	  perror("Creation du fils impossible !\n");
        case (pid_t) 0 :
	  execl("./proposer_cours", "./proposer_cours", NULL);
	  perror("Recouvrement impossible !");
        default:
	  wait(NULL);
      }
    }
    else if (rep == "5" && etud)
    {
      cout << "Tada" << endl << endl;
    }
    else if (rep == "6" && rang != 0)
    {
      rang = 0;
      admin = false;
      prof = false;
      etud = false;
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
