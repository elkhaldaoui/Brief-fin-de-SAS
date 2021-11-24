#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//
typedef struct informations
{
char nom[10];
char prenom[10];
char cin[10];
int solde;
}informations;
informations*i;
//
int client=0,taille,nom,prenom,cin,solde;
//
void ajouterCompte (char*nom,char*prenom,char*cin,int*solde)
{
strcpy (i[client].nom, nom);
strcpy (i[client].prenom, prenom);
strcpy (i[client].cin, cin);
i[client].solde==solde;
client++;
}
//
void plusieurscomptes (){
         printf("donner les nombres %d des clients:\n ",n);
           scanf("%d",&n);
           for(i=j; i<n; i++){
               printf("donner les informations des clients %d: \n",i+1);
               printf("nom :\n");
               scanf("%s",info[i].nom);
               printf("prenom :\n");
               scanf("%s",info[i].prenom);
               printf("cin :\n");
               scanf("%s",info[i].cin);
               printf("montant :\n");
               scanf("%f",&info[i].montant);
               j++;
//
char rechercheCompte(char cin)
{
char x;
if (taille=0)
printf( "Pas de compte ouvert.");
else {
for (i=0; i < client; i++)
if (i[x].cin == cin)
return "c[i].cin";
}
if (i > client)
return ;
}
//
void afficherTous()
{
int x;
printf ("Affichage de tous les comptes:\n");
for (i=0; i < client; i++)
{
printf ("\nInformation compte %d", i);
printf ("\nnom de client: %s", i[x].nom);
printf ("\nprenom de client: %s", i[x].prenom);
printf ("\nCin: %s", i[x].cin);
printf ("\nSolde du compte: %d\n", i[x].solde);
}
}
//
void operationretrait(int montant)
{
int solde;
printf ("Veillez saisir le montant a retrait: ");
scanf ("%d", &montant);
if (solde > montant)
{
solde = solde - montant;
printf("Votre solde est de %d MAD.", solde);
}
else
printf("IMPOSSIBLE!");
}
//
void operationdepot(int montant)
{
int solde=0;
printf ("Veillez saisir le montant a depot: ");
scanf ("%d", &montant);
solde = solde + montant;
printf("Votre solde est de %d MAD.", solde);
}

int main ()
{
int choix,solde=0,i,montant;
char nom[10],prenom[10],cin[10];

menu:printf("_________________________ WELCOME DEAR ! __________________________\n");
printf("\n 1. INTRODUIRES UN COMPTE ");
printf("\n 2. INTRODUIRES PLUSIEURS COMPTES ");
printf("\n 3. RECHARCHE PAR CIN ");
printf("\n 4. AFFICHAGE ");
printf("\n 5. OPERATION DE DEPOT ");
printf("\n 6. OPERATION DE RETRAIT ");
printf("\n 7. FIDELISATION");
printf("\n 8. Quitter le programme ");
printf("\n____________________________________________________________________\n");


do
{
printf("\nVeuillez choisir une operation a effectuer: ");
scanf("%d", &choix);
}
while(choix > 8 || choix < 0);
//
switch (choix)
{
case 1:
printf("\nDonner le nom du client: ");
scanf("%s",&nom);
printf("\nDonner le prenom du client: ");
scanf("%s",&prenom);
printf("\nDonner son cin: ");
scanf("%s",&cin);
printf("\nDonner le solde initial du compte: ");
scanf("%d",&solde);
ajouterCompte(nom,prenom,cin,solde);
printf("\nUn compte a ete cree au NOM de %s leur CIN :\n",nom);
goto menu;
break;
case 2:
plusieurscomptes () ;
case 3:
printf ("\nDonner la cin du compte a rechercher: ");
scanf ("%d", &cin);
printf("%d",rechercheCompte(cin));
system("pause");
printf("\nAppuyer sur une touche pour continuer...\n");
system("cls");
goto menu;
break;
case 4:
afficherTous();
system("pause");
printf("\nAppuyer sur une touche pour continuer...\n");
system("cls");
goto menu;
break;
case 5:
printf("Choisissez le compte pour depot:");
scanf("%d", &montant);
debiterCompte(montant);
goto menu;
break;
case 6:
printf("Choisissez le compte a retrait:");
scanf("%d", &montant);
crediterCompte(montant);
goto menu;
break;
case 7:
printf("+ 1.3 pour les clients fideles ")
goto menu;
break;
goto menu;
break;
case 8:
printf("\n______THANK YOU DEAR!______\n");
system("exit");
break;
}

return 0;
}
