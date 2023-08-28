#include <stdio.h>
#include <stdlib.h>
#include "tab.c"

int main()
{
    int *p1 ;
    int *p2 ;
    int  nA , nB , occ ;
    printf("donnez la taille du tableau ") ;
    scanf("%d" , &nA) ;
    saisie(p1, nA) ;
    printf("donner la taille du tableau ") ;
    scanf("%d" , &nB) ;
    saisie(p2, nB) ;

    ajout_element(p1 , p2 , &nA , nB) ;
    affichage(p1 , nA) ;

    printf("donnez l'occurence : ") ;
    scanf("%d",&occ) ;
    elimination_occurences(p1 , &nA , occ ) ;
    affichage(p1 , nA) ;


    return 0;
}
