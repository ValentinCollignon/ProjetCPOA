#include "cours.hpp"
using namespace std;

int main(int argc, char *argv[])
{
  string nomCours, coursSansEspace, dateDebut, dateFin, description, descriptionSansEspace;
  vector<string> dateDebSplit, dateFinSplit;
  vector<int> dateDebSplitInt(1), dateFinSplitInt(1);
  vector<Cours> tab;
  bool dateDebCorrect, dateFinCorrect, dateDebCoherente, dateFinCoherente, succes = true;

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
    fichier.close();
  }
  
  ofstream ecriture("../cours_attente.txt", ios::out | ios::app);
  if(ecriture)
  {
    for (unsigned int i = 0 ; i < tab.size() ; i++)
    {
      if (tab[i].getNom() == coursSansEspace)
      {
	succes = false;
      }
    }
    if (succes)
    {
      ecriture << coursSansEspace << "\\" << dateDebSplitInt[0] << " " << dateDebSplitInt[1] << " " << dateDebSplitInt[2] << "\\" << dateFinSplitInt[0] << " " << dateFinSplitInt[1] << " " << dateFinSplitInt[2] << "\\" << descriptionSansEspace << endl;
      tab.push_back(Cours(coursSansEspace, dateDebSplitInt, dateFinSplitInt, descriptionSansEspace));
      cout << "Le cours à bien été envoyé à l'administrateur." << endl;
    }
    else
    {
      cout << "Erreur lors de la création de cours, nom déjà utilisé." << endl;
    }
    ecriture.close();
  }


}
