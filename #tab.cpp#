#include "header.hpp"
using namespace std;


int main(int argc, char *argv[])
{
  string dateDebut;
  vector<string> dateDebSplit;
  vector<int> dateDebSplitInt(1);

  cout << "Date de début (jj/mm/aaaa) : ";
  cin >> dateDebut;
  cin.ignore();
  dateDebSplit = split(dateDebut, '/'); //On sépare la date obtenue avec le /
  for (unsigned int i = 0 ; i<dateDebSplitInt.size() ; i++)
  {
    cout << "Tableau[" << i << "] : " << dateDebSplitInt[i] << endl;
  }
  resetTest(dateDebSplitInt); //On réinitialise le tableau qui contient les fragments de date en entier
  for (unsigned int i = 0 ; i<dateDebSplitInt.size() ; i++)
  {
    cout << "Tableau[" << i << "] : " << dateDebSplitInt[i] << endl;
  }
  dateDebSplitInt = tabStringToInt(dateDebSplit, dateDebSplitInt); //On convertie les fragments de date qui sont des string en int
}
