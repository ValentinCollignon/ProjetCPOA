#include "connexion.hpp"
using namespace std;

Utilisateur::Utilisateur()
{
}

Utilisateur::Utilisateur(string login, string password, int grade) : pseudo(login), mdp(password), rang(grade)
{
}

Utilisateur::~Utilisateur()
{
}

string Utilisateur::getPseudo() const
{
  return pseudo;
}

string Utilisateur::getPassword() const
{
  return mdp;
}

int Utilisateur::getRang() const
{
  return rang;
}
;
