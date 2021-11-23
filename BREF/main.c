#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
//
typedef struct CompteBancaire {
char nom[10];
char prenom[10];
char cin[10];
int solde;
}informations;
informations * c;

int taille_courante = 0,taille,num;
//
void ajouterCompte (char*nom,char*prenom,char*cin,int*solde){

strcpy (c[taille_courante].nom, nom);
strcpy (c[taille_courante].prenom, prenom);
strcpy (c[taille_courante].cin, cin);
c[taille_courante].solde==solde;
taille_courante++;
}

char * rechercheCompte(char cin){
char i;
if (taille=0)
printf( "Pas de compte ouvert.");
else {
for (i=0; i < taille_courante; i++)
if (c[i].cin == cin)
return "c[i].cin";
}
if (i > taille_courante)
return "null";
}

//
void afficherTous(){
int i;
printf ("Affichage de tous les comptes:\n");
for (i=0; i < taille_courante; i++){
printf ("\nInformation compte %d", i);
printf ("\nProprietaire: %s", c[i].nom);
printf ("\nProprietaire: %s", c[i].prenom);
printf ("\nCin: %s", c[i].cin);
printf ("\nSolde du compte: %d\n", c[i].solde);
}
}

void debiterCompte(int montant){
int solde;
printf ("Veillez saisir le montant a retrait: ");
scanf ("%d", &montant);
if (solde > montant){
solde = solde - montant;
printf("Votre solde est de %d MAD.", solde);
}
else
printf("Votre solde est insuffisant pour effectuer cette operation");

}
void crediterCompte(int montant){
int solde=0;
printf ("Veillez saisir le montant a debiter: ");
scanf ("%d", &montant);
solde = solde + montant;
printf("Votre solde est de %d MAD.", solde);

}

int main () {
int choix,solde=0,i,montant;
char nom[10],prenom[10],cin[10];

printf("Donner le nombre total de comptes: ");
scanf("%d", &taille) ;

system("cls");

menu: printf("_________________________ WELCOME DEAR ! __________________________\n");
printf("\n 1. INTRODUIRES DES COMPTES ");
printf("\n 2. RECHARCHE PAR CIN ");
printf("\n 3. AFFICHAGE ");
printf("\n 4. OPERATION DE DEPOT ");
printf("\n 5. OPERATION DE RETRAIT ");
printf("\n 6. ECHANGE");
printf("\n 7. Quitter le programme ");
printf("\n____________________________________________________________________\n");





