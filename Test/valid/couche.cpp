/********
 * Fichier: couche.cpp
 * Auteurs: C.-A. Brunet
 * Date: 08 janvier 2018 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    couche.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "couche.h"
#include "Vecteur.h"

//***************Fonction Couche****************
Couche::Couche()
{
	etat=0;
	aireCouche = 0;
}

//*************Fonction etats******************
bool Couche::etats(int state)
{
//0:initialise	1:active	2:inactive	3:cache
if (state>=0 or state<4)
{
	etat=state;
	return 1;
}
	return 0;
}


//*************Fonction obtenir l'etat******************
int Couche::get_state()
{
	return etat;
}


//*************Fonction ajouter une forme******************
bool Couche::add_forme(Forme* ptr)
{
if (etat==1)
{
	//calculer l'aire total
	aireCouche += ptr -> aire();

	//ajouter la forme
	vecteurCouche.ajouter(ptr);
	return true;
}
	//si l'etat n'est pas a un, on ne peut rien ajouter 
	return false;
}


//*************Fonction retirer une forme******************
Forme* Couche::retrait_forme(int position)
{
if (etat==1)
{
	Forme* ptr = vecteurCouche.obtenir(position);
	aireCouche -= ptr -> aire();
	Forme *ptr_retrait=vecteurCouche.retrait(position);
	return ptr_retrait;
}
	Forme *ptr_retrait=NULL;
	return ptr_retrait;
}


//*************Fonction obtenir l'aire******************
float Couche::get_aire()
{
	return aireCouche;
}


//*************Fonction obtenir******************
Forme* Couche::obtenir(int position)
	{

		Forme* ptr = vecteurCouche.obtenir(position);
		return ptr; 
	}


//*************Fonction afficher******************
void Couche::afficher()
{
	if (etat==0)
	{
	cout << "Couche initialisee" << endl;	
	}
	if (etat==1 or etat==2)
	{
		int t = vecteurCouche.getTaille();
		for (int i=0; i<t; i++)
		{
			Forme* ptr = vecteurCouche.obtenir(i);
			//cout << "Couche active"<<endl;
			ptr -> afficher(cout);
		}	
	}

	if (etat==3)
	{
	cout << "Couche cachee" << endl;
	}
}


//*************Fonction translation******************
bool Couche::translate(int x1,int y1)
{
if (etat==1)
{
	int t=vecteurCouche.getTaille();
	for (int i=0; i<t; i++)
	{
	Forme* ptr = vecteurCouche.obtenir(i);
	ptr -> translater(x1, y1);
	}
	return true;
}
//on ne peut pas faire la translation si la couche n'est pas activé
return false;
}


//*************Fonction vider******************
void Couche::vide()
{
	//vecteurCouche.vider();
	cout <<"Couche vide" << endl;
}




