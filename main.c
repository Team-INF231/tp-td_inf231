#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#include "matrice.h"

int lignes,colonnes;
int A[max][max],B[max][max],C[max][max];

int main(void)
{	
	int choix;

	do
	{
		printf("\n\n\nCHOISSEZ UN NUMERO\n\n");
		printf("\t0. Quitter \n");
		printf("\t1. Effectuez une somme de matrices\n");
		printf("\t2. Effectuez un produit de matrices\n");
		printf("\n\tChoix: ");
		scanf("%d", &choix);


		switch (choix)
		{
			case 0:
				//systeme("clear");
				printf("Sortie du programme....\n");
				//system("clear");
			break;

			case 1:

				printf("Entrez le nombre de lignes:");
				scanf("%d",&lignes);
				printf("Entrez le nombre de colonnes:");
				scanf("%d",&colonnes);

				//int A[max][max],B[max][max],C[max][max];

				printf("Saisir les elements de la premiere matrice A:\n");
				lire_matrice(A,lignes,colonnes);

				printf("Saisir les elements de la seconde matrice B:\n");
				lire_matrice(B,lignes,colonnes);

				// Calcule de la sommes de matrices
				for (int i = 0; i < lignes; ++i)
				{
					for (int j = 0; j < colonnes; ++j)
					{
						C[i][j]=A[i][j]+B[i][j];
					}
				}

				printf("La somme des matrices A et B est:\n");
				afficher_matrice(C,lignes,colonnes);
			break;

			case 2:

				int lignesA,colonnesA,lignesB,colonnesB;

				printf("Entrez le nombre de lignes de la premiere matrice A:");
				scanf("%d",&lignesA);
				printf("Entrez le nombre de colonnes de la premiere matrice A:");
				scanf("%d",&colonnesA);

				printf("Entrez le nombre de lignes de la seconde matrice B:");
				scanf("%d",&lignesB);
				printf("Entrez le nombre de colonnes de la seconde matrice B:");
				scanf("%d", &colonnesB);

				// Verification des dimensions pour la multiplication
				if(colonnesA != lignesB)
				{
					printf("Erreur: le nombre de colonnes de A doit etre egal au nombre de lignes de B.\n");
					return 1;
				} 

				//int A[max][max],B[max][max],

				C[max][max]=0;

				printf("Saisir les elements de la premiere matrice A:\n");
				lire_matrice(A,lignesA,colonnesA);

				// Lire la seconde matrice 
				printf("Saisir les elements de la seconde matrice B:\n");
				lire_matrice(B,lignesB,colonnesB);

				// Multiplication de la matrice
				for(int i = 0; i<lignesA;i++)
				{
					for(int j = 0; j<colonnesB;j++)
					{
						for (int k = 0; k < colonnesA; ++k)
						{
							C[i][j] += A[i][k]*B[k][i];
						}
					}

				}

				// Afficher la matrice resulttante
				printf("Le produit des matrices A et B est: \n");
				afficher_matrice(C,lignesA,colonnesB);

			break;


		}
	}while(choix !=0);



	return 0;
}