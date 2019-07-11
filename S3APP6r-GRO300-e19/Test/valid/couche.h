/********
 * Fichier: couche.h
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Declaration de la classe pour une couche dans un
 *    canevas. La classe Couche gere un vecteur de pointeur de formes
 *    geometriques en accord avec les specifications de Graphicus.
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#ifndef COUCHE_H
#define COUCHE_H

#include <iostream>
#include "Vecteur.h"
#include "coordonnee.h"
#include "forme.h"

class Couche
{
private:	
	int etat;
	Vecteur vecteurCouche;
	float aireCouche;
	
public:
	Couche();

	bool etats(int state);
	int get_state();
	bool add_forme(Forme *ptr);
	Forme* retrait_forme(int position);
	Forme* obtenir(int position);
	float get_aire();
	bool translate(int x1, int y1);
	void vide();
	void afficher();

};

#endif
