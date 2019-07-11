/********
 * Fichier: forme.h
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Declaration des classes de formes geometriques. La
 *    classe Forme ne doit pas etre modifiee. Ce fichier fait partie de
 *    la distribution de Graphicus.
********/

#ifndef FORME_H
#define FORME_H

#include <iostream>
#include "coordonnee.h"

using namespace std;
//***************CLASSE FORME***********************//
class Forme
{
protected:
	Coordonnee ancrage;
public:
	Forme(int x = 0, int y = 0);
	virtual ~Forme();
	void translater(int deltaX, int deltaY);
	Coordonnee getAncrage();
	void setAncrage(Coordonnee c);
	virtual double aire() = 0;
	virtual void afficher(ostream & s) = 0;
};

//Les classes Rectangle, Carre et cercle sont des derives de Forme

//***********CLASSE RECTANGLE***********************//

class Rectangle: public Forme
{
   private:
      double width;
      double length;
   public:
      virtual ~Rectangle();
      void setWidth(double);
      void setLength(double);
      double getWidth() const;
      double getLength() const;
      virtual double aire();
      virtual void afficher(ostream & s); 
};

//***********CLASSE CARRE***********************//
class Carre: public Forme
{
   private:
      double length;
   public:
      virtual ~Carre();
      void setLength(double);
      double getLength() const;
      virtual double aire();
      virtual void afficher(ostream & s); 
};

//***********CLASSE CERCLE***********************//
class Cercle: public Forme
{
   private:
      double Rayon;
   public:
      virtual ~Cercle();
      void setRayon(double);
      double getRayon() const;
      virtual double aire();
      virtual void afficher(ostream & s); 
};

#endif
