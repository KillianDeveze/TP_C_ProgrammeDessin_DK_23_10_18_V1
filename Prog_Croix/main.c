#include <stdio.h>
#include <stdlib.h>


/*�crire un programme qui affiche un dessin compos� de 2 caract�res entr�es au clavier , en forme de carr� */
// TP_C_Titre_DK_Date_V
int main()
{
    //D�claration et initialisation des Variables
    char car='a';
    int Taille=0;
    int i=0;
    int j=0;
    //Saisie par l'utilisateur
    printf("Saisir un caract�re \n");
	scanf("%c",&car); //saisie du caract�re

	printf("Saisir la taille \n");
    scanf("%d",&Taille); // saisie de la taille

    //Boucle For imbriqu�es
    for(i=1;i<Taille;i++){
    	for (j=1;j<Taille;j++) {


   			if (i==j || i+j==Taille) //condition permettant d'afficher le car que lorsque i et j se croise

   					printf("%c",car); //affichage du car
   				else
   					printf(" "); //affichage d'un espace
    	}printf("\n"); //Retour � la ligne

    }

    return 0;
}
