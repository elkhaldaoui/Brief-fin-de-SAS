#include <stdio.h>
#include <stdlib.h>
void menu(int nbr,char menu[]);

int main()
{
    printf("____________WELCOME DEAR____________\n");
    menu(1,"INTRODUIRE UN COMPTE BENCAIRE\n");
    menu(2,"OPERATION\n");
    menu(3,"AFFICHAGE\n") ;
    menu(4,"RECHERCHE PAR CIN\n");
    menu(5,"FIDELISATION\n");
    menu(6,"QUITTER APPLICATION\n");
    return 0;
}

void menu(int nbr ,char menu[])
{
printf("%d\t%s",nbr,menu);
return;
}





