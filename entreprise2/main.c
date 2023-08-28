#include <stdio.h>
#include <stdlib.h>
#include "entreprise1.h"

int main()
{
    int n ;
    entreprise google ;
    printf("donnez le nombre d'employE \n");
    scanf("%d",&n);
    saisie_personnel(google , n) ;
    printf("**************************AFFICHAGE********************************");

    affichage_personnel(google , n) ;
    int n1 = 300000 ;

    printf("\n\n*****affichage_des_membres_en_fonction_du_salaire********\n\n");

    affichage_des_membres_en_fonction_du_salaire(google , n1 , n) ;
    char mot[] = "ingenieur" ;

    printf("\n\n******affichage_des_informations_en_fonction_du_metier******\n\n");

    affichage_des_informations_en_fonction_du_metier(google , mot , n) ;
    printf("\n\n*******affichage_des_femmes_secretaires******\n\n");

    affichage_des_femmes_secretaires( google ,n ) ;

    printf("\n\n*******************masse salariale**************************\n\n");

    printf("la masse salariale est %d",masse_salariale(google , n ));

    printf("\n\n*******affichage_de_femme_ingenieur******\n\n");
    //affichage_membre(affichage_de_femme_ingenieur(google) , int n) ;

    return 0;
}
