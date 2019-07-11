/********
 * Fichier: graphicus-01.cpp
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: gestionnaire de tests pour l'application Graphicus. Ce
 *    fichier fait partie de la distribution de Graphicus.
********/
#include "tests.h"

using namespace std;

int main()
{
   Tests tests;

//Enlever d'en commentaire les tests afin de voir les tests unitaires

   //tests.tests_unitaires_formes();
   //tests.tests_unitaires_vecteur();
   tests.tests_unitaires_couche();
   //tests.tests_unitaires_canevas();

   //tests.tests_application();

   return 0;
}

