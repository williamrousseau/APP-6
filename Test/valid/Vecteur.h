/********
 * Fichier: Vecteur.h
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Declaration de la classe Vecteur.
*******/

#ifndef VECTEUR_H
#define VECTEUR_H

#include <iostream>
#include "forme.h"

using namespace std;


class Vecteur
{
  private:
     int capacite;
     int taille;
     Forme** tableau;
  

 public:
     Vecteur();
     ~Vecteur();

     void ajouter(Forme *ptr);
     int getCapacite() const;
     int getTaille() const;
     
     bool vider();
     Forme* retrait(int position);
     Forme* obtenir(int position);
   
};
     
#endif
