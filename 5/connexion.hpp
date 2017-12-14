#ifndef CONNEXION_H
#define CONNEXION_H

#include <iostream>
#include <string>
#include <vector>

/* Liste des classes */
class Utilisateur
{
private:
  std::string pseudo;
  std::string mdp;
  int rang; 
protected:

public:
  Utilisateur();
  Utilisateur(std::string login, std::string password, int grade);
  ~Utilisateur();
  std::string getPseudo() const;
  std::string getPassword() const;
  int getRang() const;
};


#endif
