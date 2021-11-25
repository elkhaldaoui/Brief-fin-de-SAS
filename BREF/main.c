#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<string.h>
// cree structure comptes bancaires
struct clients
{
char Cin[10];
char Nom[10];
char Prenom[10];
double Montant;
};
// cree  tableaux de type comptes bancaires
struct clients tableaux[100];
int compteur=0;
// fonction pour introduire un compte bancaire
int introduction_c(){
printf("entrez cin : ");
scanf("%s", &tableaux[compteur].Cin);
printf("entrez le nom : ");
scanf("%s", &tableaux[compteur].Nom);
printf("entrez le prenom : ");
scanf("%s", &tableaux[compteur].Prenom);
printf("entrez montant : ");
scanf("%lf", &tableaux[compteur].Montant);
compteur++;
return 0;
}
// fonction d introduire plusieurs comptes bancaires
int introductionplusieurs_c(){
printf(" entrez le nombre du comptes: ");
int nombre_du_comptes;
scanf("%d", &nombre_du_comptes);
int index;
for( index=0;index<nombre_du_comptes;index++)
{
printf("---------------------------------------------- \n");
printf("entrez cin : ");
scanf("%s", &tableaux[compteur].Cin);
printf("entrez le nom : ");
scanf("%s", &tableaux[compteur].Nom);
printf("entrez le prenom : ");
scanf("%s", &tableaux[compteur].Prenom);
printf("entrez montant : ");
scanf("%lf", &tableaux[compteur].Montant);
compteur++;
}
return 0;
}
// fonction operation pour le retrait et depot

// fonction d'affichage les comptes bancaires
int affichage()
{
char cin[10];
int index;
bool existe=false;
printf("1- tous les on order ascendant \n");
printf("2- tous les on order descendant \n");
printf("3- tous les on order ascendant ayant un montant superieur a un chiffre introduit \n");
printf("4- tous les on order descendant ayant un montant superieur a un chiffre introduit \n");
printf("5- recherche par cin \n");
int choix;
printf("entrez votre choix : ");
scanf("%d",&choix);
int i,j,index_min,index_max;
struct clients tmpr;
double montant;
switch (choix){
case 1:
//  Par Ordre Ascendant

break;
case 2:
// Par Ordre Descendant

break;
case 3:
// Par Ordre Ascendant (les comptes bancaires ayant un montant supérieur à un chiffre introduit)

break;
case 4:
// Par Ordre descendant (les comptes bancaires ayant un montant inferieur à un chiffre introduit)

break;
case 5:
// recherche par cin
printf("entrez cin : ");
scanf("%s", &cin);
for( index=0;index<compteur;index++)
{
if( strcmp(tableaux[index].Cin,cin) ==0 )
{
existe=true;
break;
}
}
if(existe==true)
{
printf("cin : %s | " , tableaux[index].Cin );
printf("nom : %s  | "   , tableaux[index].Nom);
printf("prenom : %s  | ", tableaux[index].Prenom);
printf("montant : %lf  \n", tableaux[index].Montant);
}
else
{
printf("compte no existe \n");
}
break;
}
return 0;
}
//fonction principale:


int main()
{
int choix;
do
{
printf(" _______________________! WELCOME DEAR !_____________________\n");
printf("| 1- INTRODUIRE UN COMPTE BENCAIRE          :                |\n");
printf("| 2- INTRODUIRE PLUSIEURS COMPTES BENCAIRES :                |\n");
printf("| 3- OPERATIONS                             :                |\n");
printf("| 4- AFFICHAGE                              :                |\n");
printf("| 5- FIDELISATION                           :                |\n");
printf("| 6- QUITTER APPLICATION                    :                |\n");
printf("|____________________________________________________________|\n");
printf(" tapez votre choix : \n");
scanf("%d",&choix);
switch(choix)
{
case 1:  introduction_c();
break;
case 2:  introductionplusieurs_c();
break;
case 3:
break;
case 4:  affichage();
break;
case 5:
break;
case 6: printf("_______________THANK YOU FOR VISITING____________ \n");
break;
default : printf("entrez valeur entre 1 et 6 \n");
}
printf("--------------------------------------- \n");
}
while(choix !=6);
}
