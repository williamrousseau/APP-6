/********
 * Fichier: canevas.cpp
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    canevas.h. Ce fichier fait partie de la distribution de Graphicus.
********/

#include "canevas.h"


//**********Fonction Canevas**************
Canevas::Canevas()
{
	couches[0].etats(1);
	couches[1].etats(0);
	couches[2].etats(0);
	couches[3].etats(0);
	couches[4].etats(0);
	aireCanevas = 0;
}


//**********Destructeur*****************
Canevas::~Canevas()
{
}


//**********Fonction réinitialiser**************
bool Canevas::reinitialiser()
{
	couches[0].etats(1);
	couches[1].etats(0);
	couches[2].etats(0);
	couches[3].etats(0);
	couches[4].etats(0);
	aireCanevas = 0;
	return true;
}


//**********Fonction Activer une couche**************
bool Canevas::activerCouche(int index)
{
	if (index<0 or index>4)
	{
		return false;
	}
	for (int i=0; i<MAX_COUCHES; i++)
	{	
		int state = couches[i].get_state();
		if (state==1)
		{
		couches[i].etats(2);
		}
	}
	couches[index].etats(1);

	return true;
}


//**********Fonction Cacher une couche**************
bool Canevas::cacherCouche(int index)
{
	if (index<0 or index>4)
	{
		return false;
	}
	couches[index].etats(3);
	return true;
}


//**********Fonction ajouter une forme**************
bool Canevas::ajouterForme(Forme *p_forme)
{
	for (int i=0; i<MAX_COUCHES; i++)
	{
		int state = couches[i].get_state();

		if (state==1)
		{
		couches[i].add_forme(p_forme);
		aireCanevas += p_forme -> aire();
		return true;
		}
	}
	
	return false;
}


//**********Fonction retirer une forme**************
bool Canevas::retirerForme(int index)
{
	for (int i=0; i<MAX_COUCHES; i++)
	{
		int state = couches[i].get_state();
		if (state==1)
		{
			Forme* p_forme = couches[i].obtenir(index);
			couches[i].retrait_forme(index);
			aireCanevas -= p_forme -> aire();
			return true;
		}
	}
	return false;
}


//**********Fonction obtenir l'aire total**************
double Canevas::aire()
{
   return aireCanevas;
}


//**********Fonction Translation**************
bool Canevas::translater(int deltaX, int deltaY)
{
	for (int i=0; i<MAX_COUCHES; i++)
	{
		int state = couches[i].get_state();
		if (state==1)
		{
			couches[i].translate(deltaX/2 , deltaY/2);
		}
	}
}


//**********Fonction afficher le canevas**************
void Canevas::afficher(ostream & s)
{
	for (int i=0; i<MAX_COUCHES; i++)
	{
		cout << "----COUCHE" << i << "-----" << endl;
		couches[i].afficher();		

	}
		
}
