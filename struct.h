#ifndef HAMOUCHILARBALESTRIER_H
#define HAMOUCHILARBALESTRIER_H
// import de la bibli pour les variables boolean 
#include <stdbool.h>


//Chambre 1 lit simple (1 adulte)
typedef struct{
	
	bool sansdej;
	bool avecdej;
	bool dejSoup;
	bool allInclu;
	double prix;
	
}ChambreSingle;

//Chambre 1 lit double (2 adulte)
typedef struct{
	
	bool sansdej;
	bool avecdej;
	bool dejSoup;
	bool allInclu;
	double prix;

	
}ChambreDouble;

//Chambre 2 lits simples (2 adulte)
typedef struct{
	
	bool sansdej;
	bool avecdej;
	bool dejSoup;
	bool allInclu;
	double prix;
	
}ChambreTwin;

//Chambre 2 lits simples +1 lit double (4 adulte ou enfants)
typedef struct{
	
	bool sansdej;
	bool avecdej;
	bool dejSoup;
	bool allInclu;
	double prix;
	
}ChambreFami;
//==========================================================================================================================================
//PROTOTYPE

void afficherChambre(void);

void afficherListeChambre(void); //comprend les chambre occupé et non occupé

void extras (void);

void afficherDevis(void);

void afficherFormule(void);

void demandeFormule(void);




#endif
