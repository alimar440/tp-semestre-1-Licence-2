#ifndef ENTREPRISE_H_INCLUDED
#define ENTREPRISE_H_INCLUDED

typedef struct{
    char nom[10] ;
    char prenom[10] ;
    char sexe ;
    char metier[10] ;
    int exp ;
    int salaire ;
}Membre_personnel ;
/***************************/

typedef Membre_personnel entreprise[10] ;

/***************************/
void saisie_personnel(entreprise google , int n ) ;
void affichage_personnel(entreprise google ,int n) ;
void affichage_des_membres_en_fonction_du_salaire(entreprise google , int salaire_recherchE , int n) ;
void affichage_des_informations_en_fonction_du_metier(entreprise google , char metier_recherchE[] , int n) ;
void affichage_des_femmes_secretaires(entreprise google ,int n) ;
int masse_salariale(entreprise google , int n) ;
//Membre_Entreprise* affichage_de_femme_ingenieur( entreprise , int n ) ;

#endif // ENTREPRISE_H_INCLUDED
