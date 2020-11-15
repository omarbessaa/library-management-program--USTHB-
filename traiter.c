#include <stdio.h>
#include <stdlib.h>
#include <windows.h>




typedef struct
{
    char nom [30];
    char prenom[30];
}auteur;
//__________________________________________________________________________
typedef struct
{
    char    code[30];
    auteur auteur;
    char   titre[30];
    int    copie;

}livre;

typedef struct
{
 int       mat;
 char      nom[11];
 char      prenom[11];
 int       nb_copie;
 int       t[3];
} etudiant;



                                         /** les Fonctios **/


 /** creer fichier texte **/

 void creerFLivres()
    {
        system("color 71");
        system("mode 118,50");
        FILE *fliv;
        livre liv;
        char  rep[3];
        int   nbliv = 0;
        fliv = fopen("FLivres.txt","a");
        if (fliv == NULL )
            {
              system("cls");
              printf("\n   ERROR ! Fichier non creer\n");
            }
    else
    {
        printf("\n Veuillez introduire les informations des livres : ") ;
        do
        {
            system("cls");

            nbliv++;
            printf("\n \t\t\t le %d livre :  ",nbliv);
            printf("\n Donner le titre de ce livre : "); scanf("%s",&liv.titre);

            do
            {
            printf("\n Donner le code de ce livre entier deferent de 0 : "); scanf("%s",&liv.code);
            }while(verifnbr(liv.code)== -1 );

            printf("\n L'auteur de ce livre est : \n\t\t nom : "); scanf("%s",&liv.auteur.nom);
            printf("\n\t\t prenom : "); scanf("%s",&liv.auteur.prenom);
            printf("\n Nombre de copies disponibles : "); scanf("%d",&liv.copie);
            fprintf(fliv,"Titre : %s Auteur : %s_%s Code : %s nombre_de_copies : %d \n\n",liv.titre,liv.auteur.nom,liv.auteur.prenom,liv.code,liv.copie);
            printf("\nVeuillez Repender par oui Si Voulez vous introduire un autre livre ? "); scanf("%s",&rep);
        }while( nbliv <= 200 &&( strcmp(rep,"oui")==0 || strcmp(rep,"OUI")==0) )                ;

        fclose(fliv)                                                                            ;
        printf("\n \t Votre fichier a ete bien creer");
    }
}


//***********************************************
//***********************************************

/** vérifier si le code est un entier > 0 **/

int verifnbr(char code[20])
{
    int  i=0 , j=1 ,k=0 ;

    while( i<strlen(code) && j!= -1 )
    {

        if (code[i]=='0')
        {
             k++;
             i=i+1;
        }
        else
        {
            if (code[i]=='1')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='2')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='3')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='4')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='5')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='6')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='7')
        {
             i=i+1;
        }
        else
        {
        if (code[i]=='8')
        {
             i=i+1;
        }
        else
        {
            if (code[i]=='9')
        {
             i=i+1;
        }
        else
        {
            j = -1 ;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        }
    }

     if (k==strlen(code) ) { j= -1;}

    return j ;
}

//---------------------------------------------------
//---------------------------------------------------

/** etant donnee le code dun livre chercher s'il existe ou pas  **/

int frecherche(char mot[20] )
{
    char refcode[20],reftitre[20] , titre[30], code[15], refauteur[20], auteur[60], refcopie[20], copie[10], point[3],trouvecode;
    FILE* rech;

    trouvecode = 0;
    rech = fopen("FLivres.txt","r");
    if ( rech != NULL )
    {

        while ( !feof(rech) )
        {
            fscanf(rech," %s %s %s %s %s %s %s %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);

            if( strcmp(code,mot)==0)
            {
                trouvecode = 1;
                 return 1 ;
            }
        }
        fclose(rech);
        return trouvecode ;
    }
}

//***************** 2éme methode
int frecherchecod(int nbcode )
{
    char refcode[20],reftitre[20] , titre[30], code[15], refauteur[20], auteur[60], refcopie[20], copie[10], point[3],trouvecode;
    FILE* rech;

    trouvecode = 0;
    rech = fopen("FLivres.txt","r");
    if ( rech != NULL )
    {

        while ( !feof(rech) && (trouvecode=0) )
        {
            fscanf(rech," %s %s %s %s %s %s %s %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);

            if(  nbcode == strnbr(code))
            {
                trouvecode = 1;

            }
        }
        fclose(rech);
        return trouvecode ;
    }
}

//**********************************************

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------

/** transformer une chaine de carractère a un nobre entier **/

int strnbr(char ch[20])
{
    int i=0,cod=0;
    while(i<strlen(ch))
    {
            if (ch[i]=='0') cod=cod*10 + 0;
        else
        {
             if (ch[i]=='1') cod=cod*10 + 1;
        else
        {
             if (ch[i]=='2') cod=cod*10 + 2;
        else
        {
             if (ch[i]=='3') cod=cod*10 + 3;
        else
        {
             if (ch[i]=='4') cod=cod*10 + 4;
        else
        {
             if (ch[i]=='5') cod=cod*10 + 5;
        else
        {
             if (ch[i]=='6') cod=cod*10 + 6;
        else
        {
             if (ch[i]=='7') cod=cod*10 + 7;
        else
        {
             if (ch[i]=='8') cod=cod*10 + 8;
        else
        {
             if (ch[i]=='9')cod=cod*10 + 9;
        }
        }
        }
        }
        }
        }
        }
        }
        }
        i++;
    }
    return cod;
}

//--------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------


/** permutation pour lutiliser dans le trie d'un tableau en mode de bulle**/

void permutt (int *a, int *b)
{
	int x;
	x=*a;
	*a=*b;
	*b=x;
}

/** Trie tableau pour lutiliser dans le tire de fichier **/


void tri_bul (int tab[],int n)
{
	int i,trie;
	do
	{
		trie=1;
		for (i=0;i<n-1;i++)
		{
			if (tab[i]>tab[i+1])
			{
				permutt(&tab[i],&tab[i+1]);
				trie=0;
			}
		}
	}
	while (trie==0);
}

//--------------------------------------------------------------------
//--------------------------------------------------------------------

/** trie du fichier texte **/

void ftrierf()
{
    int T[200],N;
    int trouve,i=0;
    char refcode[20],reftitre[20],titre[30],code[15],refauteur[20],auteur[60],refcopie[20],copie[10],point[3];
    char titre1[30],auteur1[60],copie1[10];
    FILE *fliv,*ftri;
    fliv = fopen("FLivres.txt","r");
    while (!feof(fliv))
    {
        fscanf(fliv," %s %s %s %s %s %s %s %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
        T[i]=strnbr(code);
        i++;
    }
    N = i;
    tri_bul(T,N);
    ftri = fopen("ftrie.txt","w");


    rewind(fliv);
    for(i=0;i<N;i++)
    {
        trouve = 0;
        while(!feof(fliv) && trouve == 0)
        {
            fscanf(fliv," %s %s %s %s %s %s %s  %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
            if (strnbr(code)==T[i])
            {
                trouve =1;
                fprintf(ftri,"%s %s %s %s %s %s %s  %s %s %s %s %s \n\n", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
            }
        }
        rewind(fliv);
    }
    fclose(fliv);
    fclose(ftri);
    remove("FLivres.txt");
    rename("ftrie.txt","FLivres.txt");
    return 0;
}

//---------------------------------------------------------------------------------------
//---------------------------------------------------------------------------------------

/** ajouter copie = modifier fichier   **/

void ajoutercopi(int nbrcopi,int codliv)
{
    FILE *f,*fcopi;
    char refcode[20],reftitre[20] ,titre[30] , code[15] , refauteur[20] , auteur[60] , refcopie[20] , copie[10],point[3];

     int nbr=0;
    f = fopen ("FLivres.txt","r");
    fcopi = fopen("fcopie.txt","w");
    while(!feof(f))
    {
        fscanf(f," %s %s %s %s %s %s %s  %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
        if (codliv,strnbr(code)==0)
        {
            nbr = strnbr(copie) + nbrcopi ;
            fprintf(fcopi," %s %s %s %s %s %s %s  %s %s %s %s %d ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,nbr);

        }
        else
        {
            fprintf(fcopi," %s %s %s %s %s %s %s  %s %s %s %s %s \n\n", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
        }
    }
    fclose(f);fclose(fcopi);
    remove("FLivres.txt");
    rename("fcopie.txt","FLivres.txt");
}

//******************************** suprimer copie mem principe ****************************

void soustrairecopi(int codliv)
{
    FILE *f,*fcopi;
    char refcode[20],reftitre[20] ,titre[30] , code[15] , refauteur[20] , auteur[60] , refcopie[20] , copie[10],point[3];

     int nbr=0;
    f = fopen ("FLivres.txt","r");
    fcopi = fopen("fcopie.txt","w");
    while(!feof(f))
    {
        fscanf(f," %s %s %s %s %s %s %s  %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
        if ( codliv==strnbr(code))
        {
            nbr = strnbr(copie) - 1 ;
            fprintf(fcopi," %s %s %s %s %s %s %s  %s %s %s %s %d ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,nbr);

        }
        else
        {
            fprintf(fcopi," %s %s %s %s %s %s %s  %s %s %s %s %s \n\n", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
        }
    }
    fclose(f);fclose(fcopi);
    remove("FLivres.txt");
    rename("fcopie.txt","FLivres.txt");
}


//****** ajouter livre meme principe *******

void ajouterliv(char titre1[30],int copie1, char nomaut[30],char prenomaut[30],char code1[30])
{
    FILE *f,*fcopi;
    f = fopen ("FLivres.txt","a");

    fseek(f , 0, SEEK_END);
    fprintf(f," \n\n Titre : %s Auteur : %s_%s Code : %s nombre_de_copies : %d   ", titre1 ,nomaut,prenomaut, code1,copie1);
    fclose(f);
    ftrierf();
}


//-------------------------------------------------------------------------------------------
//-------------------------------------------------------------------------------------------

/** Creer fichier binaire **/

 int creerFMembres(char nomFichier[])
{
     FILE *FMembres;
     etudiant etd;
     int i, nbr;
     char rep[3];

     FMembres = fopen(nomFichier, "wb");

     if (FMembres == NULL)
     {
                return -1;
     }
        i=1;
       printf("Entrer Donnees etudiants matricule , nom, prenom :\n");
      do{
         printf("\n donnez le matricule de l'etudiant N°%d :\t",i); scanf("%d",&etd.mat);
         printf("\n donnez le nom  de l'etudiant N°%d : \t \t",i); scanf("%s",&etd.nom);
         printf("\n donnez le prenomm de l'etidiant N°%d : \t \t",i); scanf("%s",&etd.prenom);
         etd.nb_copie=0;

         i++;
         fwrite(&etd, sizeof(etd), 1,FMembres);
          printf("\n voulez vous continuer ?? oui/non   ");
         scanf("%s",&rep);
      }while(strcmp(rep,"oui")==0 || strcmp(rep,"OUI")==0);


     fclose(FMembres);
     return 1;
}


//------------------------------------------------------------------
//------------------------------------------------------------------

/** afficher les membres de la bib (les etudiants) **/

int afficherFMembres(char nomFichier[])
{
     FILE *FMembres;
     etudiant etd;
     char rep[3];
     int i,A4;//A4 pour laffichage par 4
     FMembres = fopen(nomFichier, "rb");

     if (FMembres == NULL)
    {
                return -1;
    }

    do
    {
        A4=0;
     printf("Liste des Etudiants ...\n");
     while (fread(&etd, sizeof(etd), 1,FMembres) != 0 && A4<4)
     {
          printf(" \n Matricule : %d \t Nom : %s \t Prenom : %s \t Nombre_de_cpie_emprunter : %d  \t", etd.mat,etd.nom, etd.prenom,etd.nb_copie);
          if(etd.nb_copie==0)
                    printf("Livres emprunter : Aucun! \n");
          else
           {
            printf(" Le_codes_des_livres_emprunter : \t");
          for(i=1;i<=etd.nb_copie;i++)
          {
              printf("%d ",etd.t[i]);
              printf("\t");
          }
           }
        A4++;
     }
     printf("\n");
     printf("Voulez vous afficher encore 4 etudants ? oui/non  :");
     scanf("%s",&rep);
    }while ( (strcmp(rep,"OUI")==0) || (strcmp(rep,"oui")==0) );

     fclose(FMembres);
     return 1;

}

//---------------------------------------------------------
//---------------------------------------------------------

/** ajouter ds le fichier binaire**/


int ajouterdansFMembres(char nomFichier[])
{
      FILE *FMembres;
      etudiant etd;

      FMembres = fopen(nomFichier, "ab");

      if (FMembres == NULL)
      {
                printf("Erreur ! Le fichier n'existe pas", nomFichier);
                return -1;
      }


      printf("\n Entrez Donnees etudiants matricule , nom, prenom \t \n");
      printf("\n Donnez le matricule de l'etudiant : \t"); scanf("%d",&etd.mat);
      printf("\n Donnez le nom de l'etudiant : \t "); scanf("%s",&etd.nom);
      printf("\n Donnez le prenom de l'etudiant : \t"); scanf("%s",&etd.prenom);
      etd.nb_copie=0;
      fwrite(&etd, sizeof(etd), 1,FMembres);
      fclose(FMembres);
      printf("L'etudiant est ajouter avec succses !\n");
      return 1;
}

//---------------------------------------------------------------------------
//---------------------------------------------------------------------------


/** emprunter un livre : traitement dans les deux fichier texte et binaire **/


int emprunterliv(char nomfichier[])
{
    FILE *FMembres,*Flivres;
    etudiant etd;
    livre liv;
    int matr,cod,trouve=0,i;


    FMembres=fopen(nomfichier,"rb+");
    Flivres=fopen("FLivres.txt","rt");

     if ((FMembres==NULL) || (Flivres==NULL))
        return -1;

     printf("donner le matricule de l'etudiant qui veut emprunter un livre \n");
     scanf("%d",&matr);

     while((!feof(FMembres))&&matr!=etd.mat)
     {
         fread(&etd,sizeof(etd),1,FMembres);
     }

     if(feof(FMembres))
       {
        printf ("ERRUER ! cet etudiant nexiste pas \n");system("pause"); return 0;
       }

     else
     {
        if(etd.nb_copie>3)
            printf("vous avez deja emprunter 3 livre vous pouvez pas en rajouter un autre \n");
        else
        {
            printf("donner le code du livre que vous voulez emprunter \n");
            scanf("%s",&cod);
                while((i<etd.nb_copie)&&(trouve=0))
                    {
                        if(etd.t[i]==cod)
                           trouve=1;
                        else
                        i++;
                    }

            if(trouve==1)
                printf("\n vous avez deja emprunter ce livre \n");

                else
                {
                     printf("Ce code n'existe pas %d \n\n\n",frecherche(cod));
                     if (frecherche(cod)==0) {printf("Ce code n'existe pas \n\n\n"); system("pause"); return 0;}
                       else
                       {


                            printf("vous pouvez vous disposer de ce livre \n\n\n\n");
                            etd.nb_copie++;
                            etd.t[etd.nb_copie]=cod;
                            soustrairecopi(cod);
                          system("pause");
                       }
                }
        }
     }
    fclose(FMembres);
    fclose(Flivres);

    return 1;
}

//-----------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------


/** **/

int rendrelivre(char nomfichier[])
{
    FILE *fich,*Flivres;
    etudiant etd;
    livre liv;
    int trouve=0,code1,matr,i;


    fich=fopen(nomfichier,"rb+");
    Flivres=fopen("FLivres.txt","rt+");

     if ((fich==NULL) || (Flivres==NULL) )
        return -1;

     printf("donner le matricule de l'etudiant qui veut rendre un livre \n");
     scanf("%d",&matr);

     while((!feof(fich))&&matr!=etd.mat)
     {
         fread(&etd,sizeof(etd),1,fich);
     }
     if(feof(fich))
        printf ("ERRUER ! cet etudiant n'existe pas \n");
    else
     {

       printf("donner le code du livre a rendre \n");
       scanf("%d",&code1);
              i=0;printf("hihihih");
       while( (etd.t[i]!=code1) && (i<etd.nb_copie) && (trouve=0) )
       {
           if(etd.t[i]==code1)
            {
                etd.t[i]=etd.t[etd.nb_copie+1];
                trouve=1;
            }
            else i++;
       }

       ajoutercopi(1,code1); etd.nb_copie=etd.nb_copie-1;
	  if (trouve==1) { ajoutercopi(1,code1); etd.nb_copie=etd.nb_copie-1; }
	  else { printf("ce code %d n'est pas emprunter par cet etudiant %d",code1,matr); }
     }

    fclose(fich);
    fclose(Flivres);

    return 1;
}

//----------------------------------------------------------------
//----------------------------------------------------------------


int supprimeretudiant(char nomfichier[])
{
   FILE *fich,*fint;
   etudiant etd ;
   int matr,trouve=0;

   fich=fopen(nomfichier,"rb");
   fint=fopen("fint.dat","wb");

    if((fich==NULL)||(fint==NULL))
        return -1;

    printf(" \n Donnez le matricule de l'etudiant que vous voulez supprimer ");
    scanf("%d",&matr);

    while((!feof(fich))&&(trouve==0))
    {
        fread(&etd,sizeof(etd),1,fich);
       if(etd.mat==matr)
        {
            trouve=1;
        }
    }
    if (feof(fich)==1)
        printf("\n Aucun etudiant ne convient a ce matricule \n");
    else
      while(fread(&etd,sizeof(etd),1,fich)==1)
    {

        if(etd.mat!=matr)
        {
            fwrite(&etd,sizeof(etd),1,fint);
        }
    }
    printf("l'etudiant est supprimer !\n\n\n");
    fclose(fich);
    fclose(fint);
    remove(nomfichier);
    rename("fint.dat",nomfichier);
    system("pause");
    return 1;
}

//----------------------------------------------------------------
//----------------------------------------------------------------

int affichageFMembres(char nomfichier[])
{

   FILE *fich;
   etudiant etd ;
   int i,j;
   char rep[3];

   fich=fopen(nomfichier,"rb");

    if(fich==NULL)
         return -1;
    printf("Affichage 4 par 4 \n");

    do
    {
        i=0;
          while ((fread(&etd, sizeof(etd), 1, fich) !=0)&&(i<4))
            {
                printf(" \n Matricule : %d \t Nom : %s \t Prenom : %s \t Nombre_de_cpie_emprunter : %d  \t", etd.mat,etd.nom, etd.prenom,etd.nb_copie);
                    if(etd.nb_copie==0)
                        printf("Livres emprunter : Aucun! \n");
                    else
                    {
                        printf(" Le_codes_des_livres_emprunter : \t");
                            for(j=1;j<=etd.nb_copie;j++)
                                {
                                    printf("%d ",etd.t[j]);
                                    printf("\t");
                                }
                    }
               i++;
            }
            printf("\n voulez vous continuer ?? (oui/non)");
            scanf("%s",&rep);
    }while((strcmp(rep,"oui")==0 || strcmp(rep,"OUI")==0)&& (!feof(fich)));
    if (feof(fich)) { printf("         pas des etudiant encore !\n\n\n "); system("pause");}

        fclose(fich);
        return 1;
}

//---------------------------------------------------------------------
//---------------------------------------------------------------------


/** trie fichier binaire **/


int ftrierbin()
{
    etudiant etd;
    int t[50000];
    int tail;
    int trouve,i=0;
    FILE *fich,*ftri;
    fich= fopen("FMembres.dat","rb");
    ftri = fopen("FMembrestri.dat","wb");




	if ( (ftri==NULL) || (fich==NULL) )
	{
	    printf("\n ERROR");
	 	return -1;
    }

	while (!feof(fich))
    {
        fread(&etd,sizeof(etd),1,fich);
        t[i]=etd.mat;
        i++;
    }
    tail = i;
    tri_bul(t,tail);


	for(i=0;i<tail;i++)
    {
        rewind(fich);
        trouve = 0;
        while(!feof(fich) && trouve == 0)
        {
            fread(&etd,sizeof(etd),1,fich);
            if (etd.mat==t[i])
            {
                fwrite(&etd,sizeof(etd),1,ftri);
                trouve=1;
			}
        }
    }
    fclose(fich);
    fclose(ftri);
    remove("FMembres.dat");
    rename("FMembrestri.dat","FMembres.dat");

    return 1;
}

//-------------------------------------------------------------*
//--------------------------------------------------------------


/** doute !!! **/

int listedeslivreemprunter(char nomfichier[])
{
    FILE *fich,*flivre,*f;
    etudiant etd;
    livre liv;
    char refcode[20],reftitre[20] , titre[30], code[15], refauteur[20], auteur[60], refcopie[20], copie[10], point[3],trouvecode;
    int matr,i,n;

    flivre=fopen("FLivres.txt","r");
    fich=fopen(nomfichier,"rb");

    if ((fich==NULL)||(flivre==NULL))
        return -1;

    printf("donner le matricule de cette etudiant \n");
      scanf("%d",&matr);

    while ((!feof(fich)&&(matr!=etd.mat)))
    {
            fread(&etd,sizeof(etd),1,fich);

    }

    if(feof(fich))
      printf("le matricule %d que vous avez introduit n'apartient a aucun etudiant ",matr);

    else
    {
        n=etd.nb_copie;
        f= fopen("FLivres.txt","r");
        for (i=0;i<n;i++)
        {
              while(!feof(f))
              {
                  fscanf(f," %s %s %s %s %s %s %s %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
                  if (etd.t[i] == strnbr(code))
                  {
                      printf(" %s %s %s %s %s %s %s %s %s %s %s %s \n", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
                  }
              }
              rewind(f);
        }
    }
    fclose(fich);
    fclose(f);
    fclose(flivre);
}
 //------------------------------------------------------------------------------------
 //------------------------------------------------------------------------------------


 /** faute dans cette fonction **/


 void afichelivres()
{
    FILE *f;
    int i;
    char rep[3];
    char refcode[20],reftitre[20] ,titre[30] , code[15] , refauteur[20] , auteur[60] , refcopie[20] , copie[10],point[3];
     f=fopen("FLivres.txt","r");
     if (f==NULL) { printf("\n le fichier des livres n'existe pas "); }


    do
    {
       i=0;
          while ( (!feof(f)) && (i<4) )
            {

             fscanf(f," %s %s %s %s %s %s %s %s %s %s %s %s ", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
             printf(" %s %s %s %s %s %s %s %s %s %s %s %s \n", reftitre,point,titre,refauteur,point,auteur, refcode,point,code,refcopie,point,copie);
             i++;
         }
   if (feof(f)) {printf("pas d'etudiants encore ! Fin de fichier \n"); system("pause");}
   else { printf("\n voulez vous continuer ?? (oui/non)");
            scanf("%s",&rep);
        }
    }while((strcmp(rep,"oui")==0 )&& (!feof(f)));
fclose(f);
}

                                                     /**FIN
   //************************************************* FIN *****************************************************************
                                                     **/
