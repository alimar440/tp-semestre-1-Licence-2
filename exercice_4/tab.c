#include <stdlib.h>
#include <stdio.h>
#include "tab.h"

saisie(int *t , int taille){
    int* tab1  ;
    printf("saisie du tableau : \n") ;
    for( tab1 = t ; tab1 < t + taille ; tab1++){

        scanf("%d" , tab1) ;
        printf("\n") ;

    }
}
ajout_element(int *A , int *B , int* nA , int nB){
    int* pA ;
    int* pB = B ;
    for( pA = A + *nA ; pA < A + nA + nB ; pA++){
        pA = pB ;
        pB++ ;
    }
    *nA += nB ;
}
elimination_occurences ( int *A , int *nA , int occ) {
    int *p1 = A ; int *p2 = A ;
    int compte ;
    while(p1 < p1 + nA){

        if(*p2 == occ)
            compte++ ;
        else{
            p1 = p2 ;
            p1++ ;

        }
        p2++ ;

    }
    *nA -= compte ;
}
affichage(int t  , int taille ){
    printf("AFFICHAGE: \n") ;
    int *tab1 ;
    for( tab1 = t ; tab1 < t + taille ; tab1++){
        printf("%d  " , tab1) ;
    }
}
