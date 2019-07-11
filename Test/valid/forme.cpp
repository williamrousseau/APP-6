/********
 * Fichier: forme.cpp
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    forme.h.
********/

#include "forme.h"

#include <iostream>      // Needed for cout
#include <cstdlib>       // Needed for the exit function
using namespace std;

const double PI = 3.14159; 

//*********Fonction pour le point d'ancrage**********
Forme::Forme(int x1, int y1)
{
  ancrage.x = x1;
  ancrage.y = y1;
}

//********Destructeur*********
Forme::~Forme()
{
}

//*********Fonction Translation**********
void Forme::translater(int deltaX, int deltaY)
{
   ancrage.x += deltaX;
   ancrage.y += deltaY;
}

//*********Fonction obtenir le point d'ancrage**********
Coordonnee Forme::getAncrage()
{
   return ancrage;
}

//*********Fonction pour ajouter le point d'ancrage**********
void Forme::setAncrage(Coordonnee c)
{
   ancrage = c;
}

//********************************************************SEPARATION RECTANGLE****************************************************

//*********Fonction pour la largeur**********
void Rectangle::setWidth(double w)
{
   if (w >= 0)
      width = w;
   else
   {
      cout << "Invalid width\n";
      exit(EXIT_FAILURE);
   }
}

//*********Fonction pour la longueur**********
void Rectangle::setLength(double len)
{
   if (len >= 0)
      length = len;
   else
   {
      cout << "Invalid length\n";
      exit(EXIT_FAILURE);
   }
}

//*********Fonction pour obtenir la largeur**********
double Rectangle::getWidth() const
{
   return width;
}

//*********Fonction pour obtenir la longueur**********
double Rectangle::getLength() const
{
   return length;
}

//*********Fonction pour l'aire**********
double Rectangle::aire()

{
   return width * length;
}

//*********Fonction pour afficher le rectangle**********
void Rectangle::afficher(ostream & s)
{
	cout << "Rectangle(x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << getLength() << ", h=" << getWidth() << ", aire=" << aire() << ")" << endl;
}

//********Destructeur*********
Rectangle::~Rectangle()
{
}


//********************************************************SEPARATION CARRE****************************************************

//*********Fonction pour la longueur**********
void Carre::setLength(double len)
{
   if (len >= 0)
      length = len;
   else
   {
      cout << "Invalid length\n";
      exit(EXIT_FAILURE);
   }
}

//*********Fonction pour obtenir la longueur**********
double Carre::getLength() const
{
   return length;
}

//*********Fonction pour l'aire**********
double Carre::aire()

{
   return length * length;
}

//*********Fonction pour afficher le carre**********
void Carre::afficher(ostream & s)
{
	cout << "Carre(x=" << ancrage.x << ", y=" << ancrage.y << ", l=" << getLength() << ", aire=" << aire() << ")" << endl;
}

//********Destructeur*********
Carre::~Carre()
{
}

//********************************************************SEPARATION CERCLE****************************************************

//*********Fonction pour le rayon**********
void Cercle::setRayon(double rayon)
{
   if (rayon >= 0)
      Rayon = rayon;
   else
   {
      cout << "Rayon Invalide \n";
      exit(EXIT_FAILURE);
   }
}

//*********Fonction pour obtenir le rayon**********
double Cercle::getRayon() const
{
   return Rayon;
}

//*********Fonction pour l'aire**********
double Cercle::aire()

{
   return PI * Rayon * Rayon;
}

//*********Fonction pour afficher le cercle**********
void Cercle::afficher(ostream & s)
{
	cout << "Cercle(x=" << ancrage.x << ", y=" << ancrage.y << ", R=" << getRayon() << ", aire=" << aire() << ")" << endl;
}

//********Destructeur*********
Cercle::~Cercle()
{
}

