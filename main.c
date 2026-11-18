#include <stdio.h>
#include <stdlib.h>
#include "struct.h"
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	printf("\n");
    printf("==========================================================\n");
    printf("*                                                        *\n");
    printf("*      BIENVENUE DANS VOTRE APPLICATION HOTELIERE        *\n");
    printf("*                                                        *\n");
    printf("==========================================================\n");
    printf("\n");
    printf("  Ici, vous pouvez :                                      \n");
    printf("   - Consulter la disponibilite des chambres en temps reel\n");
    printf("   - Gerer les reservations                               \n");
    printf("   - Suivre l'etat de chaque chambre (libre, occupee,     \n");
    printf("     en nettoyage ou en maintenance)                      \n");
    printf("   - Voire les tarifs des chambres                        \n");
    printf("   - Voire les tarifs des Extras                          \n");
    
    
    printf("\n");
    printf("  Notre objectif : vous faire gagner du temps pour vous   \n");
    printf("  offrir un sejour agreable.                              \n");
    printf("\n");
    printf("==========================================================\n");
    
    printf("\n");
    printf("\n");
    

    printf("  Voulez-vous :                                           \n");
    printf("    1 Consulter la disponibilite des chambres en temps reel\n");
    printf("    2 Gerer les reservations                               \n");
    printf("    3 Suivre l'etat de chaque chambre (libre, occupee,     \n");
    printf("      en nettoyage ou en maintenance)                      \n");
    printf("    4 Voire les tarifs des chambres                        \n");
    printf("    5 Voire les tarifs des Extras                          \n");
    
    int choix = 0;

    do{
    	printf("Veuillez choisir une action : ");
    	scanf("%d",  &choix);
    
	
	switch (choix) {
	    case 1:
	        printf("    1 Consulter la disponibilite des chambres en temps reel\n");
	        break;
	    case 2:
	        printf("    2 Gerer les reservations                               \n");
	        break;
	    case 3:
	       printf("    3 Suivre l'etat de chaque chambre (libre, occupee,     \n");
	    	printf("      en nettoyage ou en maintenance)                      \n");
	        break;
	    case 4:
	        printf("    4 Voire les tarifs des chambres                        \n");
	        break;
	    case 5:
	        printf("    5 Voire les tarifs des Extras                          \n");
	        break;
	    default:
	        printf("\033[31mVeuillez encoder un chiffre compris entre 1 et 5.\033[0m\n\n");
	        break;
}
}while(choix < 1 || choix >5);
    
}
