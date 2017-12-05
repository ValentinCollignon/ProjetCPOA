#include "header.hpp"

int main(int argc, char *argv[])
{
  string nomCours, dateDebut, dateFin, description;
  vector<string> dateDebSplit, dateFinSplit;
  vector<int> dateDebSplitInt(1), dateFinSplitInt(1);
  bool dateDebCorrect, dateFinCorrect, dateDebCoherente, dateFinCoherente;

  do
  {
    cout << "Nom du cours : ";
    getline(cin, nomCours);
    if (nomCours == "")
    {
      cout << "Le cours doit avoir un nom" << endl ;
    }
  }
  while (nomCours == "");

  do
  {
    cout << "Date de début (jj/mm/aaaa) : ";
    cin >> dateDebut;
    cin.ignore();
    dateDebSplit = split(dateDebut, '/'); //On sépare la date obtenue avec le /
    dateDebSplitInt = resetInt(dateDebSplitInt); //On réinitialise le tableau qui contient les fragments de date en entier
    dateDebSplitInt = tabStringToInt(dateDebSplit, dateDebSplitInt); //On convertie les fragments de date qui sont des string en int
    dateDebCorrect = dateValide(dateDebSplitInt);
    dateDebCoherente = dateJuste(dateDebSplitInt);
    if(!dateDebCorrect)
    {
      cout << "Format de date invalide, veuillez recommencer." << endl;
    }
    else
    {
      if(!dateDebCoherente)
      {
	cout << "La date ne doit pas etre antérieur à celle d'aujourd'hui, veuillez recommencer." << endl;
      }
    }
  }
  while (!dateDebCorrect || !dateDebCoherente);

  do
  {
    cout << "Date de fin (jj/mm/aaaa) : ";
    cin >> dateFin;
    cin.ignore();
    dateFinSplit = split(dateFin, '/'); //On sépare la date obtenue avec le /
    dateFinSplitInt = resetInt(dateFinSplitInt); //On réinitialise le tableau qui contient les fragments de date en entier
    dateFinSplitInt = tabStringToInt(dateFinSplit, dateFinSplitInt); //On convertie les fragments de date qui sont des string en int
    dateFinCorrect = dateValide(dateFinSplitInt);
    dateFinCoherente = dateComparaison(dateDebSplitInt, dateFinSplitInt);
    if(!dateFinCorrect)
    {
      cout << "Format de date invalide, veuillez recommencer." << endl;
    }
    else
    {
      if(!dateFinCoherente)
      {
	cout << "La date ne doit pas etre antérieur à celle du début, veuillez recommencer." << endl;
      }
    }
  }
  while (!dateFinCorrect || !dateFinCoherente);

  cout << "Description : ";
  getline(cin, description);

  cout << "Vous avez créé le cours " << nomCours << " qui commence le " << dateDebSplitInt[0] << "/" << dateDebSplitInt[1] << "/" << dateDebSplitInt[2] << " et termine le " << dateFinSplitInt[0] << "/" << dateFinSplitInt[1] << "/" << dateFinSplitInt[2] << ". La description du cours est : " << description << endl ;
}
