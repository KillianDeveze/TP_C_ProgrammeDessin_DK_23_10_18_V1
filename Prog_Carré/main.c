#include <stdio.h>
#include <stdlib.h>


/*�crire un programme qui affiche un dessin compos� de 2 caract�res entr�es au clavier , en forme de carr� */
// TP_C_Titre_DK_Date_V
int main()
{
    //D�claration et initialisations des variables
    char car1='a',car2='b';
    int Taille=0;
    int i=0;
    int j=0;

    //Saisie des variables par l'utilisateur
    printf("Saisir un caract�re \n");
	scanf("%c",&car1); //saisie du premier car
	fflush(stdin); //r�gle le probl�me de saisi

	printf("Saisir un deuxi�me caract�re \n");
    scanf("%c",&car2); //saisi du second car

    printf("Saisir la taille \n");
    scanf("%d",&Taille);//demande de la taille du carr� � l'utilisateur

    //Boucle For imbriqu�es
    for(i=1;i<Taille+1;i++){
    	for (j=1;j<Taille+1;j++) {

            //Condition afin d'afficher le premier caract�re seulement sur les extr�mit�s du carr� et le caract�re 2 � l'int�rieur
            if (i==1 || i==Taille || j==1 || j==Taille)
                printf("%c ",car1); //Affichage du premier car

            else

                printf("%c ",car2);//affichage du second car



        } printf("\n"); //Permet un retour a la ligne a chaque fin de la seconde boucle
    }

    return 0;}

