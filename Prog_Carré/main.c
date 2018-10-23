#include <stdio.h>
#include <stdlib.h>


/*écrire un programme qui affiche un dessin composé de 2 caractères entrées au clavier , en forme de carré */
// TP_C_Titre_DK_Date_V
int main()
{
    //Déclaration et initialisations des variables
    char car1='a',car2='b';
    int Taille=0;
    int i=0;
    int j=0;

    //Saisie des variables par l'utilisateur
    printf("Saisir un caractère \n");
	scanf("%c",&car1); //saisie du premier car
	fflush(stdin); //règle le problème de saisi

	printf("Saisir un deuxième caractère \n");
    scanf("%c",&car2); //saisi du second car

    printf("Saisir la taille \n");
    scanf("%d",&Taille);//demande de la taille du carré à l'utilisateur

    //Boucle For imbriquées
    for(i=1;i<Taille+1;i++){
    	for (j=1;j<Taille+1;j++) {

            //Condition afin d'afficher le premier caractère seulement sur les extrémités du carré et le caractère 2 à l'intérieur
            if (i==1 || i==Taille || j==1 || j==Taille)
                printf("%c ",car1); //Affichage du premier car

            else

                printf("%c ",car2);//affichage du second car



        } printf("\n"); //Permet un retour a la ligne a chaque fin de la seconde boucle
    }

    return 0;}

