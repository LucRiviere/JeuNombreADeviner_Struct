/*************************************************/
// Nom du projet: Jeu du nombre à deviner
// Nom du fichier: MainJeuNombreAdeviner.cpp
// Version : 1.0
// Nom du programmeur: MP Pinaud/ Luc Rivière
// Date de création : 08/02/2021
// Rôle du fichier: Contient le code jeu
// Nom des composants utilises: JeuNombreADeviner.h
//                              iostream
// Historique du fichier:
//Coder le MaiJeuNombreADevinercpp et le JeuNombreADeviner.cpp + parametrer les entrees/sorties dans le JeuNombreADeviner.h
/*************************************************/
#include <iostream>
#include <ctime>
#include <string>
#include "JeuNombreADeviner.h"


int main()
{

    cout << "Vous allez jouer pour deviner un nombre secret" <<endl;
    TJoueur joueur1;
    string username;
    cout << "Entrez votre prenom" << "\n";
    cin>> username;
    InitJoueur(joueur1, username);
    cout << Nom(joueur1) <<endl;
    int n{10};
    int tirage = std::rand () % n;
    JouerPartie(joueur1,tirage);
    int nbEssais{};
    bool gagne{};
    MajResultatsJoueur(joueur1,nbEssais,gagne);


  return 0;
}
