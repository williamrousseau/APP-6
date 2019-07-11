/********
 * Fichier: Vecteur.cpp
 * Auteurs: metf3401 rouw2001
 * Date: 10 juin 2019 (creation)
 * Description:Implementation des methodes de la classe decrites dans
 *    Vecteur.h.
********/

#include "Vecteur.h"

#include <iostream>      // Needed for cout

using namespace std;

//*****Fonction Vecteur********
Vecteur::Vecteur()
{
	capacite = 3;
	taille = 0;
	tableau = new Forme*[capacite];

	for (int i=0;i<capacite;i++)
	{
	tableau[i]=NULL;
	}
	//delete [] tableau;
}

//*******Destructeur************
Vecteur::~Vecteur()
{
}


//*******************OBTENIR LA CAPACITE***********************
int Vecteur::getCapacite() const
{
	return capacite;
}

//*******************OBTENIR LA TAILLE***********************
int Vecteur::getTaille() const
{
	return taille;
}

//*******************AJOUTER UNE FORME**************************
void Vecteur::ajouter(Forme *ptr)
{
	if (taille==capacite)
	{
		capacite *= 2;
		Forme** tableau2 = new Forme*[capacite];
		for (int t=0; t<taille; t++)
		{
		tableau2[t] = tableau[t];
		}
		
		tableau = tableau2;

		//delete [] tableau2;

		for (int t=taille ; t<capacite ; t++)
		{
			//delete [] tableau;
			tableau[t]=NULL;
		}
	}
	
	tableau[taille]=ptr;
	taille++;


}

//*****************VIDER LE TABLEAU*****************************
bool Vecteur::vider()
{
	for (int i=0;i<capacite;i++)
	  {
		tableau[i] = NULL;
		delete [] tableau;

	  }

        return true;  
}

//************************OBTENIR FORME STOCKEE**************************
Forme* Vecteur::obtenir(int position)
{
	Forme *ptr_obtenir;
	ptr_obtenir = tableau[position];
	
	return ptr_obtenir;
	
}

//*******************RETRAIT D'UNE FORME**********************
Forme* Vecteur::retrait(int position)
{
	if (position>=taille)
	{
	return NULL;
	}
	Forme *ptr_retirer = tableau[position];
	// << ptr_retirer << endl;
	for (position; position<taille; position++)
	{
	tableau[position]=tableau[position+1];
	}
	tableau[taille-1]=NULL;
	taille--;
	//cout << ptr_retirer << endl;

	return ptr_retirer;
}


