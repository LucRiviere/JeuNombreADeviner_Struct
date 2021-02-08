/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: JeuNombreADeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud/ Luc Rivière
// Date de création : 08/02/2021
// Rôle du fichier: Contient le code des fonctions du jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
//                              ctime
// Historique du fichier:
//Coder le MaiJeuNombreADevinercpp et le JeuNombreADeviner.cpp + parametrer les entrees/sorties dans le JeuNombreADeviner.h
/*************************************************/
#include <iostream>
#include <ctime>
#include "JeuNombreADeviner.h"
// Nom :InitJoueur
// Rôle : Crée un joueur. Initialise toutes les informations du joueur.
// Le nombre de tentatives, de parties gagnées et de parties jouées seront à 0.

void InitJoueur(TJoueur &joueurAcreer, const string un_nom)

{
    joueurAcreer.Nom = un_nom;
    joueurAcreer.nbTentatives = 0;
    joueurAcreer.nbPartiesJouees = 0;
    joueurAcreer.nbPartiesGagnees = 0;
}


// Nom :TirerNombreMystere
// Rôle : Tire aléatoirement un nombre à deviner entre 0 et 10
// Valeur de retour : nombre à deviner

void TirerNombreMystere(int &tirage)
{
    do
    {
      cout << "Tapez un chiffre valide entre 0 et 10" << "\n";
      cin >> tirage
  while ((tirage< 0) || (tirage > 10));
}

// Nom :JouerPartie
// Rôle : Fait jouer une partie au joueur passé en paramètre
//  A la fin, met à jour les informations du joueur


void JouerPartie (TJoueur &un_joueur, int nombreATrouver)

{
 std::srand (time(nullptr));
  int n {10};
  int nombreMystere= std::rand () % n;
  int nombreATrouver{};
  int tirage{};
  int tentatives = 8;
  int i;
  TirerNombreMystere(tirage);
  cout << "Nombre compris dans l'intervalle : " << tirage <<endl;

  for (i = 0; i < tentatives; i++)
    {
      cout << "Trouve le nombre mystere" << endl;
      nombreATrouver= tirage;
      cin >> nombreATrouver;

      if (nombreATrouver == nombreMystere)
    {
       cout << "Gagne" << endl;
       break;
    }

      if (nombreATrouver < nombreATrouver)
   {
    cout << "More" <<endl;
   }
      else
   {
    cout << "Less" <<endl;
   }

      if (i == tentatives - 1)
   {
    cout << "Failed" <<endl;
   }
    }
    cout << "Nombre d'essais : " << i;
}

// Nom : MajResultatsJoueur
// Rôle : met à jour les informations du joueur passé en paramètre
// Paramètres d'entrée:
// Paramètres de sortie:
// Paramètres d'entrée/sortie :

void MajResultatsJoueur(TJoueur &joueur, const int nbEssais, const bool gagne)

{
    int tentatives{};
    int tirage{};
    int nombreMystere{};

 TJoueur joueur1;
 TirerNombreMystere(tirage);
 tentatives=nbEssais;
 tirage= true;
}

// Nom : ResultatsJoueur
// Rôle : indique les résultats du joueur passé en paramètre
// Le nombre de parties gagnées, le nombre de parties perdues, le nombre d'essais total
// La fonction N'affiche PAS les informations à l'écran

void ResultatsJoueur(const TJoueur &joueur, int &nbsuccess, int &nbechec, int &nbessais)

{
    int tentatives{};
    int tirage{};
    int i{};

 TJoueur joueur1;
 tentatives=nbessais;
 tirage = true;
 tirage == nbsuccess;
 i = false;
 nbechec == i;

}

// Nom :Nom
// Rôle : retourne le nom du joueur
// Paramètres d'entrée: le joueur dont on veut le nom
// Valeur de retour : nom du joueur

string Nom(TJoueur joueur)

{

    return joueur.Nom;
}
