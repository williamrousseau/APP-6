# creation makefile William Rousseau Felix Methot juin 2019
#

graphicus-02:  graphicus-02.o canevas.o couche.o forme.o tests.o Vecteur.o
	g++ -o graphicus-02 graphicus-02.o canevas.o couche.o forme.o tests.o Vecteur.o

graphicus-02.o: graphicus-02.cpp tests.h canevas.h forme.h coordonnee.h couche.h Vecteur.h
	g++ graphicus-02.cpp -g -c

canevas.o: canevas.cpp canevas.h forme.h coordonnee.h couche.h Vecteur.h
	g++ canevas.cpp -g -c

couche.o: couche.cpp couche.h Vecteur.h forme.h coordonnee.h 
	g++ couche.cpp -g -c

Vecteur.o: Vecteur.cpp Vecteur.h forme.h coordonnee.h
	g++ Vecteur.cpp -g -c

forme.o: forme.cpp forme.h coordonnee.h
	g++ forme.cpp -g -c

tests.o: tests.cpp tests.h canevas.h forme.h coordonnee.h couche.h
	g++ tests.cpp -g -c

clean :
	rm -f *.o	


	






