#include "header.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  string nomCours, coursSansEspace, dateDebut, dateFin, description, descriptionSansEspace;
  vector<string> dateDebSplit, dateFinSplit;
  vector<int> dateDebSplitInt(1), dateFinSplitInt(1);
  bool dateDebCorrect, dateFinCorrect, dateDebCoherente, dateFinCoherente;

  //On demande le nom du cours
  do
  {
    cout << "Nom du cours : ";
    getline(cin, nomCours);
    coursSansEspace = supprimerEspace(nomCours); //On supprime les espaces pour éviter un nom 'vide'
    if (coursSansEspace == "")
    {
      cout << "Le cours doit avoir un nom" << endl ;
    }
  }
  while (coursSansEspace == "");
 
  //On demande la date du début de ce cours
  do
  {
    cout << "Date de début (jj/mm/aaaa) : ";
    cin >> dateDebut;
    cin.ignore();
    dateDebSplit = split(dateDebut, '/'); //On sépare la date obtenue avec le /
    dateDebSplitInt = resetInt(dateDebSplitInt); //On réinitialise le tableau qui contient les fragments de date en entier
    dateDebSplitInt = tabStringToInt(dateDebSplit, dateDebSplitInt); //On convertie les fragments de date qui sont des string en int
    dateDebCorrect = dateValide(dateDebSplitInt); //On vérifie que la date soit écrite dans un format correct
    dateDebCoherente = dateJuste(dateDebSplitInt); //On vérifie que la date ne soit pas déjà dépassée
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

  //On demande la date de fin de ce cours
  do
  {
    cout << "Date de fin (jj/mm/aaaa) : ";
    cin >> dateFin;
    cin.ignore();
    dateFinSplit = split(dateFin, '/'); //On sépare la date obtenue avec le /
    dateFinSplitInt = resetInt(dateFinSplitInt); //On réinitialise le tableau qui contient les fragments de date en entier
    dateFinSplitInt = tabStringToInt(dateFinSplit, dateFinSplitInt); //On convertie les fragments de date qui sont des string en int
    dateFinCorrect = dateValide(dateFinSplitInt); //On vérifie que la date soit écrite dans un format correct
    dateFinCoherente = dateComparaison(dateDebSplitInt, dateFinSplitInt); //On vérifie que la date ne soit pas antérieur à la date de début
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

  //On demande une description (qui peut etre vide)
  cout << "Description : ";
  getline(cin, description);
  descriptionSansEspace = supprimerEspace(description); //On supprime les espaces pour éviter une description 'vide'
  cout << "Vous avez créé le cours " << nomCours << " qui commence le " << dateDebSplitInt[0] << "/" << dateDebSplitInt[1] << "/" << dateDebSplitInt[2] << " et termine le " << dateFinSplitInt[0] << "/" << dateFinSplitInt[1] << "/" << dateFinSplitInt[2] << ". ";
  if (descriptionSansEspace == "")
  {
    cout << "Il n'y a pas de description pour ce cours." << endl;
  }
  else
  {
    cout << "La description du cours est : " << description << endl ;
  }

  Cours cours(coursSansEspace, dateDebSplitInt, dateFinSplitInt, descriptionSansEspace);
  cout << "Nom du cours : " << cours.getNom() << endl;
  


}
