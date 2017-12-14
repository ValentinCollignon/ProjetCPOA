#include "header.hpp"
using namespace std;

/*
  split permet de casser un string  suivant un séparateur donné en plusieurs string
*/
vector<string> split(string texte, char separateur)
{
  vector<string> token(1);
  vector<int> positionSeparateur(1);
  unsigned int indiceSeparateur = 0, indiceToken = 0, pos = 0, depart = 0;
  
  do
  {
    //Si on rencontre un séparateur
    if (texte[pos] == separateur)
    {
      //S'il n'y a plus de place dans le tableau qui stocke la position des séparateurs
      if (indiceSeparateur >= positionSeparateur.size())
      {
	positionSeparateur.push_back(pos);
      }
      else
      {
	positionSeparateur[indiceSeparateur] = pos;
      }
      indiceSeparateur++;

      //S'il n'y a plus de place dans le tableau qui stocke les sous-chaines de string
      if (indiceToken >= token.size())
      {
	token.push_back(texte.substr(depart, positionSeparateur[indiceSeparateur-1]-depart));
      }
      else
      {
	token[indiceToken] = texte.substr(depart, positionSeparateur[indiceSeparateur-1]-depart);
      }
      indiceToken++;
      depart = positionSeparateur[indiceSeparateur-1] + 1;
    }
    pos++;
  }
  while (pos < texte.size());

  //Ajoute...
  if (indiceToken >= token.size())
  {
    token.push_back(texte.substr(depart, texte.size()-depart));
  }
  else
  {
    token[indiceToken] = texte.substr(depart, texte.size()-depart);
  }

  return token;
}

/*
  dateValide regarde si une date donnée correspond à une date
*/
bool dateValide(vector<int> date)
{
  bool resultat = true;
  int jour[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
  
  if (date.size() != 3)
  {
    resultat = false;
  }
  else
  {
    //Si le mois n'est pas compris entre 1 et 12
    if (date[1] < 1 || date[1] > 12)
    {
      resultat = false;
      cout << "Le mois est faux" << endl;
    }
    else
    {
      //Si nous sommes en fevrier
      if (date[1] == 2)
      {
	if ((date[2]%4==0 && date[2]%100!=0) || date[2]%400==0)
	{
	  jour[1] = 29;
	}
      }
      //Si le jour n'est pas compris entre 1 et le nombre du jour du mois
      if (date[0] < 1 || date[0] > jour[date[1]-1])
      {
	resultat = false;
	cout << "Le jour est faux" << endl;
      }
    }
    //Si l'année est inférieur ou égal à 0 on considère qu'elle est incorrecte
    if (date[2] <= 0)
    {
      resultat = false;
      cout << "L'année est faux" << endl;
    }
  }
  return resultat;
}

/*
  reset remet à zero un tableau donnée
*/
vector<int> resetInt(vector<int> tab)
{
  for (unsigned int i = 0 ; i<tab.size() ; i++)
  {
    tab[i] = 0 ;
  }
  tab.resize(1);

  return tab;
}

/* 
  Convertie un tableau de string en un tableau de int 
*/
vector<int> tabStringToInt(vector<string> tabString, vector<int> tabInt)
{
  for (unsigned int i = 0 ; i<tabString.size() ; i++)
  {
    if (i >= tabInt.size())
    {
      tabInt.push_back(atoi(tabString[i].c_str()));
    }
    else
    {
      tabInt[i] = atoi(tabString[i].c_str());
    }
  }
  
  return tabInt;
}

/*
  dateJuste vérifie que la date est cohérente par rapport à la date actuelle
*/
bool dateJuste(vector<int> date)
{
  bool resultat = true;
  time_t seconde;
  struct tm instant;

  time(&seconde);
  instant = *localtime(&seconde);

  if( date[2]< instant.tm_year+1900)
  {
    resultat= false ;
  }
  else
  {
    if ( date[2] == instant.tm_year+1900)
    {
      if(  date[1]<instant.tm_mon+1 )
      {
	resultat= false ;
      }
      else
      {
	if ( date[1] == instant.tm_mon+1 )
	{
	  if(date[0] < instant.tm_mday)
	  {
	    resultat= false ;
	  }
	}
      }
    }
  }

  return resultat;
}

/*
  dateComparaison compare la date de fin avec la date de début pour vérifier que la date de fin ne soit pas antérieur à celle du début
*/
bool dateComparaison(vector<int> dateDeb, vector<int> dateFin)
{
  bool resultat = true;

  if(dateFin[2]< dateDeb[2])
  {
    resultat= false ;
  }
  else
  {
    if (dateFin[2] == dateDeb[2])
    {
      if(dateFin[1] < dateDeb[1])
      {
	resultat= false ;
      }
      else
      {
	if (dateFin[1] == dateDeb[1])
	{
	  if(dateFin[0] < dateDeb[0])
	  {
	    resultat= false ;
	  }
	}
      }
    }
  }

  return resultat;
}

string supprimerEspace(string texte)
{
  string resultat = "";
  unsigned int i = 0, j = texte.size();
  while (texte[i] == ' ')
  {
    i++;
  }
  while (texte[j-1] == ' ')
  {
    j--;
  }
  for(i=i ; i < j ; i++)
  {
    resultat += texte[i];
  }
  return resultat;
}
