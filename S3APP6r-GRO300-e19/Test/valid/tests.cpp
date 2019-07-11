/********
 * Fichier: tests.cpp
 * Auteurs: metf3401 rouw2001
 * Date: 13 juin 2019 (creation)
 * Description: Implementation des methodes des classes decrites dans
 *    tests.h.  Ce fichier peut etre adapte a vos besoins de tests. 
 *    Ce fichier fait partie de la distribution de Graphicus.
********/

#include "tests.h"

void Tests::tests_unitaires_formes()
{
   //**********************************************************Tests Rectangle*********************************************************

   // *****AJOUT DE LA FORME******
   Coordonnee rec;
   Coordonnee testrec;
   rec.x=2;
   rec.y=4;			
   Rectangle box;
   box.setWidth(4);
   box.setLength(5);
   box.setAncrage(rec);
   testrec=box.getAncrage();
   cout << "\n*********************Tests #1**********************" << endl;
   //cout << "x:" << testrec.x << endl;
   //cout << "y:" << testrec.y << endl;
   //cout <<"Aire:" << box.aire() << endl;

   // *****AFFICHER LA FORME******
   box.afficher(cout);
   
   //************************************************************Tests Carré*************************************************************

   // *****AJOUT DE LA FORME******
   Carre carre;
   Coordonnee car;
   Coordonnee testcar;
   car.x = 3;
   car.y = 6;
   carre.setLength(5);
   carre.setAncrage(car);
   testcar=carre.getAncrage();
   cout << "\n*********************Tests #2**********************" << endl;
   //cout << "x:" << testcar.x << endl;
   //cout << "y:" << testcar.y << endl;
   //cout <<"Aire:" << carre.aire() << endl;

   // *****AFFICHER LA FORME******
   carre.afficher(cout);

   //**********************************************************Tests Cercle***************************************************************

   // *****AJOUT DE LA FORME******
   Cercle cercle;
   Coordonnee cer;
   Coordonnee testcer;
   cer.x = 5;
   cer.y = 3;
   cercle.setRayon(3);
   cercle.setAncrage(cer);
   testcer=cercle.getAncrage();
   cout << "\n*****************Tests #3*******************" << endl;
   //cout << "x:" << testcer.x << endl;
   //cout << "y:" << testcer.y << endl;
   //cout <<"Aire:" << cercle.aire() << endl;

   // *****AFFICHER LA FORME******
   cercle.afficher(cout);
}



   //*************************************************Tests sur la classe Vecteur**********************************************************

void Tests::tests_unitaires_vecteur()
{
   
   cout << "\n***************Tests Vecteur******************" << endl;
   cout << "\nAvant l'ajout de formes" << endl;

   // *****AJOUT DU VECTEUR******
   Vecteur vec;

   // *****AFFICHER LA TAILLE ET LA FORME DU VECTEUR INITIÉ******
   cout << "Taille: " << vec.getTaille() << endl;
   cout << "Capacite: " << vec.getCapacite() << endl;

   // *****AJOUT DES FORMES******
   Carre carre1;
   Forme *ptr= &carre1;
   vec.ajouter(ptr);
  Carre carre2;
   Forme *ptr2= &carre2;
   vec.ajouter(ptr2);
  Carre carre3;
   Forme *ptr3= &carre3;
   vec.ajouter(ptr3);
  Carre carre4;
   Forme *ptr4= &carre4;
   vec.ajouter(ptr4);

   // *****AFFICHER LA TAILLE ET LA FORME DU VECTEUR APRÈS L'AJOUT******
   
   //cout << "\nApres l'ajout de vecteur" << endl;
   cout << "\nTest #4 et #5" << endl;
   cout << "Taille : " << vec.getTaille() << endl;
   cout << "Capacite : " << vec.getCapacite() << endl;

  // ************obtenir adresse d'une forme**************
  cout<< "\nTest #6" << endl;
  cout<< "l'adresse du vecteur 3 : " << vec.obtenir(3) << endl;
  

   // *****RETRAIT D'UNE FORME******
    cout << "\nTest #7" << endl;
   cout<< "le pointeur retire: " << vec.retrait(2) << endl;

   // *****AFFICHER LA TAILLE ET LA FORME DU VECTEUR APRÈS LE RETRAIT******
   //cout << "\nApres retrait de vecteur" << endl;
   cout << "Taille 2: " << vec.getTaille() << endl;
   cout << "Capacite 2: " << vec.getCapacite() << endl;

   // *****OBTENIR L'ADRESSE DU POINTEUR DE LA FORME DEMANDÉ******
   //cout << "\nVecteur obtenu :" << vec.obtenir(2) << endl;
   //cout << vec.obtenir(3) << endl;
   


}


  //*********************************************Tests sur la classe Couche********************************************************

void Tests::tests_unitaires_couche()
{

	cout << "\n***************Tests Couche******************\n" << endl;
	Couche Couche1;

   // *****ÉTAT DE LA COUCHE******
	cout << "\nTest #8" << endl;
	Couche1.etats(1);
	cout <<"Etat de la couche : "<< Couche1.get_state() << endl;

   // *****AJOUT DE FORMES DANS LA COUCHE******
	Carre carre1;
	Coordonnee car1;
	car1.x = 2;
	car1.y = 3;
	carre1.setAncrage(car1);
	carre1.setLength(5);
	Forme *ptr1= &carre1;
	
	Carre carre2;
	Coordonnee car2;
	car2.x = 1;
	car2.y = 4;
	carre2.setAncrage(car2);
	carre2.setLength(5);
	Forme *ptr2= &carre2;

	Carre carre3;
	Coordonnee car3;
	car3.x = 5;
	car3.y = 2;
	carre3.setAncrage(car3);
	carre3.setLength(5);
	Forme *ptr3= &carre3;

	Carre carre4;
	Coordonnee car4;
	car4.x = 0;
	car4.y = 0;
	carre4.setAncrage(car4);
	carre4.setLength(5);
	Forme *ptr4= &carre4;
	cout << "\nTest #9 et #10" << endl;
	Couche1.add_forme(ptr1);
	Couche1.afficher();


   // *****AFFICHER LES FORMES DE LA COUCHE******
   cout << "\nTest #11" << endl;
   Couche1.add_forme(ptr2);
   Couche1.add_forme(ptr3);
   Couche1.add_forme(ptr4);
   Couche1.afficher();


   // *****AFFICHER L'AIRE TOTALE DE LA COUCHE******

	//cout << "\nApres l'ajout de formes" << endl;
	cout << "\nTest #12" << endl;
	cout <<"Aire Total:" << Couche1.get_aire() << endl;


   // *****RETRAIT D'UNE FORME DANS LA COUCHE******
	cout << "\nTest #13" << endl;
	cout << "Adresse du vecteur retire : "<< Couche1.retrait_forme(0) <<endl;


   // *****AFFICHER L'AIRE TOTALE DE LA COUCHE APRÈS LE RETRAIT******

	//cout << "\nApres le retrait d'une forme" << endl;
	cout <<"Aire Total:" << Couche1.get_aire() << endl;
	//cout << "\nPosition des formes" << endl;


   // *****OBTENIR LES POSITIONS DES POINTEURS DE LA COUCHE******
	cout << "\nTest #14" << endl;
	cout << "Adresse du de la forme zero : "<< Couche1.obtenir(0)<< endl;
	//cout << Couche1.obtenir(1)<< endl;
	//cout << Couche1.obtenir(2)<< endl;


   // *****AFFICHER LES FORMES DE LA COUCHE APRÈS LE RETRAIT******
	
	cout << "\nAffichage des formes\n" << endl;
	Couche1.afficher();


   // *****TRANSLATION DE LA COUCHE ET AFFICHAGE******
	cout << "\nTest #15" << endl;
	cout << "Affichage des formes apres translation\n" << endl;
	Couche1.translate(2,3);
	Couche1.afficher();

	cout << "\nTest #16" << endl;
	Couche1.vide();
}




   // ***************************************************Tests sur la classe Canevas****************************************************

void Tests::tests_unitaires_canevas()
{

	cout << "\n***************Tests Canevas******************" << endl;
	
	cout << "\nTests #1" << endl;
	Canevas canevas1;
	canevas1.afficher(cout);
   // *****AJOUT DES COUCHES******

	Carre carre1;
	Coordonnee car1;
	car1.x = 2;
	car1.y = 3;
	carre1.setAncrage(car1);
	carre1.setLength(5);
	Forme *p_forme1= &carre1;
	canevas1.ajouterForme(p_forme1);
	cout << "\nTests #18" << endl;
	canevas1.afficher(cout);

	Rectangle carre2;
	Coordonnee car2;
	car2.x = 4;
	car2.y = 2;
	carre2.setAncrage(car2);
	carre2.setLength(6);
	carre2.setWidth(4);
	Forme *p_forme2= &carre2;
	canevas1.activerCouche(2);
	canevas1.ajouterForme(p_forme2);
	cout << "\nTests #19" << endl;
	canevas1.afficher(cout);

	/*Cercle forme3;
	Coordonnee for3;
	for3.x = 4;
	for3.y = 2;
	forme3.setAncrage(car2);
	forme3.setRayon(4);
	Forme *p_forme3= &forme3;
	canevas1.ajouterForme(p_forme3);*/


   // *****AFFICHER L'AIRE******
	cout << "\nTest #20" << endl;
	cout << "Aire Total du Canevas: " << canevas1.aire() << endl;	


   // *****AFFICHER LES FORMES******

	//canevas1.afficher(cout);


   // ********TRANSLATION**********
	
	cout << "\nTest #21 et 22" << endl;
	cout << "\nAffichage des formes apres translation\n" << endl;
	canevas1.translater(2,3);
	canevas1.afficher(cout);


   // *****RETIRER UNE COUCHE******
	cout << "\nTest #23" << endl;
	canevas1.retirerForme(0);
	//cout << "\nAire Total du Canevas apres avoir retirer une forme: " << canevas1.aire() << endl;
	//cout << "\nAffichage du canevas avec la forme retiree\n" << endl;
	canevas1.afficher(cout);




}

void Tests::tests_unitaires()
{
   // Fait tous les tests unitaires
   tests_unitaires_formes();
   tests_unitaires_vecteur();
   tests_unitaires_couche();
   tests_unitaires_canevas();
}


void Tests::tests_application()
{
   // Fait tous les tests applicatifs
   tests_application_cas_01();
   tests_application_cas_02();
}



   // ********************************************************TEST CAS-01****************************************************************

void Tests::tests_application_cas_01()
{
	cout << "\n-----------------------------------TESTS APPLICATION (CAS 01)-------------------------------------------------\n" << endl;
 
	Canevas canevas1;


   //********ACTIVER COUCHE #1***********

	cout << "\n--------------ACTIVER COUCHE #1------------------\n" << endl;
	canevas1.activerCouche(1);
	canevas1.afficher(cout);



   //********AJOUT DE 3 FORMES***********

	cout << "\nAJOUT DE FORMES\n" << endl;
	Carre forme1;
	Coordonnee for1;
	for1.x = 2;
	for1.y = 3;
	forme1.setAncrage(for1);
	forme1.setLength(5);
	Forme *p_forme1= &forme1;
	canevas1.ajouterForme(p_forme1);

	Rectangle carre2;
	Coordonnee car2;
	car2.x = 4;
	car2.y = 2;
	carre2.setAncrage(car2);
	carre2.setLength(6);
	carre2.setWidth(4);
	Forme *p_forme2= &carre2;
	canevas1.ajouterForme(p_forme2);

	Cercle forme3;
	Coordonnee for3;
	for3.x = 4;
	for3.y = 2;
	forme3.setAncrage(car2);
	forme3.setRayon(4);
	Forme *p_forme3= &forme3;
	canevas1.ajouterForme(p_forme3);

	canevas1.afficher(cout);

	cout <<"\nAire Total:" << canevas1.aire() << endl;
	cout << "\n" << endl;

	
	 //********ACTIVER COUCHE #2***********

	cout << "\n-------------------ACTIVER COUCHE #2---------------------\n" << endl;	
	canevas1.activerCouche(2);
	canevas1.afficher(cout);

	
	//AJOUTER UNE FORME	

	canevas1.ajouterForme(p_forme1);


	//********AFFICHER CANEVAS #2 AVEC COUCHE AJOUTER***********

	cout << "\nAJOUT DE FORMES\n" << endl;
	canevas1.afficher(cout);

	cout <<"\nAire Total:" << canevas1.aire() << endl;
	cout << "\n" << endl;


	 //********ACTIVER COUCHE #0***********

	cout << "\n-------------------ACTIVER COUCHE #1---------------------\n" << endl;
	canevas1.activerCouche(1);


	//*******AJOUTER FORMES******

	cout << "\n  AJOUT DE FORMES\n" << endl;
	canevas1.ajouterForme(p_forme1);
	canevas1.ajouterForme(p_forme2);
	canevas1.ajouterForme(p_forme3);

	
	//**********CACHER COUCHE 2************

	canevas1.cacherCouche(3);
	canevas1.afficher(cout);

	
	//********ACTIVER COUCHE #1***********

	canevas1.activerCouche(1);


	//************TRANSLATION COUCHE***************

	cout << "\n  APRES TRANSLATION\n" << endl;
	canevas1.translater(2,2);
	canevas1.afficher(cout);


	//***************AFFICHER L'AIRE****************	

	cout <<"\nAire Total:" << canevas1.aire() << endl;


	//****************RETIRER UNE FORME*****************	

	cout << "\n APRES AVOIR RETIRER LA PREMIERE FORME" << endl;	
	canevas1.retirerForme(0);
	canevas1.afficher(cout);
	cout <<"\nAire Total:" << canevas1.aire() << endl;


	//****************RÉINITIALISATION*****************

	cout << "\n INITIALISATION DU CANEVAS\n" << endl;	
	canevas1.reinitialiser();
	canevas1.afficher(cout);
	cout <<"\nAire Total:" << canevas1.aire() << endl;

	
}

void Tests::tests_application_cas_02()
{
   cout << "\nTESTS APPLICATION (CAS 02)" << endl;  
    // Il faut ajouter les operations realisant ce scenario de test.
}
