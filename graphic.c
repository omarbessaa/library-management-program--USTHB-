
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "conio.c"


void debut()
{
    system("color 4");
    system("mode 118,45");
    //----declaration des Variables----
    int x=wherex(),y=wherey(),i,xx,yy,ii;
    //---------------------------------
    //gotoxy(x,y);
    color(15,0);
    printf("|===================================================================================================================|\n");
    printf("|                                       U   S  T  H  B                                                              |\n");
    printf("|                        TP  Algorithme : Gestion  d'un  bibliotheque                                               |\n");
    printf("|      Realise par :      BESSAA_OMAR INOURAR_HICHAM L1 MI Section 2  Groupe 3|                            2016/2017|\n");
    printf("|                                                                                                                   |\n");
    printf("|===================================================================================================================|\n");
    color(15,12);
    for(i=1;i<35;i++)
    puts(  "|                                                                                                                   |");
    printf("|===================================================================================================================|\n");
    printf("|                                         : BIBLIOTHEQUE:                                                           |\n");
    printf("|===================================================================================================================|\n");
    //yy=wherey();xx=wherex();
    gotoxy(x+10,y+12);
    printf("_________________________________");gotoxy(wherex()-33,wherey()+2);
    printf("_________________________________");gotoxy(wherex()-32,wherey()-1);
    delay2("CHARGEMENT DU PROGRAMME ... ",15);
    gotoxy(x+5,y+19);
    color(10,2);
    for(i=1;i<=100;i++)
    {
       printf("%c %d ",176,i);
       Sleep(30);
       gotoxy(wherex()-4,wherey());
    }
    gotoxy(wherex()+4,wherey());
    printf("%%");
    color(1,7);
    gotoxy(wherex()-90,wherey()+5);puts("");
    buttom("VEUILLEZ APPUYER SUR TOUCHE POUR COMMENCER.",10,2);
    getch();
    gotoxy(xx,yy);
    clrscr();
}




//-----------------------------------------------------------------




/** pour afficher un botton avec un texte dedans **/
void buttom(char text[],int a , int b)
{
    int i,x,y;x=wherex();y=wherey();
    //-----------------------------------
    color(a,b);
    printf("%c",201);
    for(i=1;i<=strlen(text)+5;i++) printf("%c",205);
    printf("%c\n",187);
    printf("%c  %s   %c\n",186,text,186);
    printf("%c",200);
    for(i=1;i<=strlen(text)+5;i++) printf("%c",205);
    printf("%c",188);
    gotoxy(x+4+strlen(text),y+1);
    color(1,7);
}

/** affichage d'un string lettre apr lettre avec une periode 't' entre les lettres'avec changement des couleurs'**/
 void delay(char chaine[1000],int t)
 {
     int i=0 ,j,x,y;
     for (j=3;j<10;j++)
     {
      x=wherex(),y=wherey();
      color(j,7);
     for (i=0;i<strlen(chaine);i++ )
     {
         printf("%c",chaine[i]);
         Sleep(t);
     }
     gotoxy(x,y);
    }
 }


/** affichage d'un string lettre apr lettre avec une periode 't' entre les lettres'sans changement des couleurs'**/
 void delay2(char chaine[1000],int t)
 {
     int i=0 ,j,x,y;
      x=wherex(),y=wherey();
     for (i=0;i<strlen(chaine);i++ )
     {
         printf("%c",chaine[i]);
         Sleep(t);
     }
     gotoxy(x,y+1);

 }




 void quit()
{
    system("mode con LINES=30 COLS=90");
    clrscr() ;
    int x=wherex(),y=wherey(),i;
    color(1,7);
    printf("    |=================================================================================|\n");
    printf("    |*********//              Merci Pour votre Visite                      \\*********|\n");
    printf("    |********//                                                             \\********|\n");
    printf("    |*******//                                                               \\*******|\n");
    printf("    |******//                                                                 \\******|\n");
    printf("    |*****//                                                                   \\*****|\n");
    printf("    |****//                                                                     \\****|\n");
    printf("    |***//                                                                       \\***|\n");
    printf("    |**//                                                                         \\**|\n");
    printf("    |*//                                                                           \\*|\n");
    printf("    |//                                                                             \\|\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                | \n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |                                                                                |\n");
    printf("    |\\                                                                             //|\n");
    printf("    |*\\                                                                           //*|\n");
    printf("    |**\\                                                                         //**|\n");
    printf("    |***\\                                                                       //***|\n");
    printf("    |****\\                                                                     //****|\n");
    printf("    |*****\\                                                                   //*****|\n");
    printf("    |******\\                                                                 //******|\n");
    printf("    |*******\\                                                               //*******|\n");
    printf("    |********\\                                                             //********|\n");
    printf("    |*********\\                                                           //*********|\n");
    printf("    |================================================================================|");
    gotoxy(x+8,y+11);
    color(1,7);
    delay2("            Made By INOURAR HICHAM",60);gotoxy(x+10,y+12);
    delay2("                    BESSAA OMAR",60);gotoxy(x+10,y+12);
    system("color 72");Sleep(90);
    system("color f1");Sleep(90);
    system("color 24");Sleep(90);
    system("color a3");Sleep(90);
    system("color 72");Sleep(90);
    system("color f1");Sleep(90);
    system("color 24");Sleep(90);
    system("color 24");Sleep(90);
    gotoxy(x+3,y+15);
}




/** Le Menu **/

//-----------------------------------------------------------
//-----------------------------------------------------------


void menu()
{
    clrscr();
    system("color 71");
    printf("_________________________________________________________\n");
    color(15,1);
    printf("\t                MENU                             \n");
    printf("_________________________________________________________\n");
    color(15,2);
    printf("| [01] creer fichier FLivres                            |\n");
    printf("| [02] creer fichier binaire                            |\n");
    printf("| [03] Disponibilite d'un livre                         |\n");
    printf("| [04] Emprunter un livre                               |\n");
    printf("| [05] Rendre un livre                                  |\n");
    printf("| [06] Supprimer un etudiant                            |\n");
    printf("| [07] Ajouter un etudiant                              |\n");
    printf("| [08] Ajouter une copie d'un livre                     |\n");
    printf("| [09] Supprime une copie d'un livre                    |\n");
    printf("| [10] Ajouter un nouveau livre                         |\n");
    printf("| [11] Afiicher tous les livres existants               |\n");
    printf("| [12] Afficher tous les membres                        |\n");
    printf("| [00] quitter                                          |\n");
    printf("|_______________________________________________________|\n");
    color(1,19);
    printf("\n\n\n");
}
//------------------------------------------------------------------------------------
//------------------------------------------------------------------------------------

/** l'affichage de haut de la page avec un titre 'str'
void en_haut(char str[])
{
    int i,x,y;
    clrscr();
    x=wherex();
    y=wherey();
    system("color 71");
    color(1,11);
    printf("|===========================================================================================================================================================|\n");
    for(i=1;i<=157;i++) printf(" ");
    gotoxy(wherex()-100,wherey()); printf("%s",str);
    gotoxy(1,wherey()+1);
    printf("|===========================================================================================================================================================|\n");
    gotoxy(x+3,y+4);
    color(1,7);
}
**/
