#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
typedef struct{
 char CIN [10];
 char Nom[10];
 char Prenom[10];
 double Montant;}
information;

void choix(int nbr ,char choix[])
{
printf("entrer votre choix:\n");
scanf("%d",&nbr);
return;
}


















void xhoix(int nbr,char choix[]);
int main()
{
    printf("____________WELCOME DEAR____________\n");
    printf("1 INTRODUIRE UN COMPTE BENCAIRE\n");
    printf("2 OPERATION\n");
    printf("3 AFFICHAGE\n") ;
    printf("4 RECHERCHE PAR CIN\n");
    printf("5 FIDELISATION\n");
    printf("6 QUITTER APPLICATION\n");
    do
    {
        do
        {
            scanf("%d",&choix);
            printf("Votre choix : ");
        }
        while (choix < 1 || choix > 6);
        switch (choix)
        {
            case 1 :

            case 2 :

            case 3 :

            case 4 :

            case 5 :


            default : break;
        }
    }
    while (choix != 6);
    return 0;
}







