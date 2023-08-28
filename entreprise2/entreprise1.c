#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "entreprise1.h"

void saisie_personnel(entreprise google , int n ) {

    printf("saisie\n\n");
    for(int i = 0 ; i < n ; i++){
        printf("\nle nom du personnel N %d : \n", i+1 ) ;
        scanf("%s",google[i].nom ) ;
        printf("\nle prenom du personnel N %d :\n", i+1 ) ;
        scanf("%s",google[i].prenom ) ;
        printf("\nle sexe du personnel N %d : \n", i+1 ) ;
        scanf("%s", &google[i].sexe) ;
        printf("\nle metier du personnel N %d : \n", i+1 ) ;
        scanf("%s",google[i].metier) ;
        printf("\n le nombre d'experience du personnel N %d : \n", i+1 ) ;
        scanf("%d", &google[i].exp ) ;
        printf("\n le salaire du personnel N %d : \n", i+1 ) ;
        scanf("%d",&google[i].salaire ) ;
        printf("\n\n");
    }
}
void affichage_personnel(entreprise google , int n  ) {
    for(int i = 0 ; i < n ; i++){

   	 printf("\n  %s	" , google[i].nom) ;

        printf(" %s 	", google[i] .prenom) ;
        printf(" %c	", google[i] .sexe) ;
        printf("%s	", google[i] .metier ) ;
        printf(" %d	", google[i] .exp ) ;
        printf("%d	", google[i] .salaire) ;
   }

}
void affichage_membre(Membre_personnel google ) {

        printf("\n  %s	" ,google.nom) ;

        printf(" %s 	",  google.prenom) ;
        printf(" %c	", google.sexe) ;
        printf("%s	", google.metier ) ;
        printf(" %d	", google.exp ) ;
        printf("%d	", google.salaire) ;
    }


void affichage_des_membres_en_fonction_du_salaire(entreprise google , int salaire_recherchE , int n ) {
    for(int i = 0 ; i <n ; i++){
        if(salaire_recherchE <= google[i].salaire)
            affichage_membre(google[i]) ;
    }
}
void affichage_des_informations_en_fonction_du_metier(entreprise google , char* metier_recherchE , int n ) {
    for(int i = 0 ; i < n ; i++){
        if(strcmp(metier_recherchE , google[i].metier) == 0)
            affichage_membre(google[i]) ;
    }
}
void affichage_des_femmes_secretaires(entreprise google , int n  ) {
    for(int i = 0 ; i < n ; i++){
        if((strcmp("secretaire" , google[i].metier ) == 0) &&( google[i].sexe == 'F' ))
            affichage_membre(google[i]) ;
    }
}
int masse_salariale(entreprise google , int n ) {
    int sum = 0 ;
    for(int i = 0 ; i < n ; i++){
        sum += google[i].salaire ;
    }
    return sum ;
}
