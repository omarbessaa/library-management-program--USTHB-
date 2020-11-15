#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "graphic.c"
#include "traiter.c"


#define NomFichierBin    "FMembres.dat"
#define Fichiertri      "FMembrestri.dat"



int main()
{
    int choi,i, codlivre,nbrcopis,copie1;
    char titre1[30] ,  nomaut[30], prenomaut[30], code1[30];

    debut();
 menu:
    menu();
    buttom("Votre Choix:",1,7);
    scanf("%d",&choi);

    switch(choi)
    {
    case 1 :
        system("cls");
        color(1,7);
        creerFLivres();
        system("pause");
        ftrierf();
        printf("\n votre fichier a ete cree");
        system("pause");
        break;

    case 2 :
        system("cls");
        color(1,7);
        creerFMembres(NomFichierBin);
        ftrierbin();
        printf("\n votre fichier a ete cree\n");
        system("pause");
        break;

     case 3 :
         system("cls");
         color(1,7);
         char mot[20];
         printf("\n veuillez donnez votre code a chercher :");scanf("%s",&mot);
         frecherche(mot);
         if (frecherche(mot)==1)   printf("\n votre livre de code %s existe\n\n\n\n",mot);
         else printf("\n votre livre n'existe pas \n\n\n\n ");
         system("pause");
        break;

     case 4 :
         system("cls");
         emprunterliv(NomFichierBin);
        break;

     case 5 :
         system("cls");
         rendrelivre(NomFichierBin);
        break;

     case 6 :
         system("cls");
         color(1,7);
         supprimeretudiant(NomFichierBin);
        break;

     case 7 :
         system("cls");
         ajouterdansFMembres(NomFichierBin);
         ftrierf();
        break;

     case 8 :
         system("cls");

         printf("\nDonnez le code de livre : ");scanf("%d",&codlivre);
         printf("\n Combien de copies ??  = ");scanf("%d",&nbrcopis);
         ajoutercopi(nbrcopis,codlivre);
        break;

     case 9 :
         system("cls");
         printf("\n Donnez le code de livre pour soustrir une copie :");scanf("%d",&codlivre);
         soustrairecopi(codlivre);
        break;

     case 10 :
         system("cls");
         printf("\n le titre :");scanf("%s",&titre1);
         printf("\n le nom de l'auteur :");scanf("%s",&nomaut);
         printf("\n le prenom de l'auteur  :");scanf("%s",&prenomaut);
         printf("\n le code  :");scanf("%s",&code1);
         printf("\n le nombre de copies : ");scanf("%d",&copie1);
         ajouterliv(titre1,copie1, nomaut,prenomaut, code1);
        break;

     case 11 :
         system("cls");
         afichelivres(titre1,copie1, nomaut,prenomaut, code1);
        break;

     case 12 :
         system("cls");
         affichageFMembres(NomFichierBin);
        break;

     case 00 :quit();
         return 0;
        break;

     default:
         break;

    }

goto menu;

}
