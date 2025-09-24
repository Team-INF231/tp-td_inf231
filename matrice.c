#include<stdio.h>
#include<stdlib.h>

#include "matrice.h"

void  lire_matrice(int matrice[max][max],int lignes,int colonnes)
{
	for(int i=0;i<lignes;i++)
	{
		for(int j=0;j<colonnes;j++)
		{
			printf("Entrez l'element [%d][%d]:",i+1,j+1);
			scanf("%d", &matrice[i][j]);
		}
	}
}

/*----------------------separateur de fonction-----------------------------------------------*/


void afficher_matrice(int matrice[max][max], int lignes, int colonnes)
{
	for(int i=0;i<lignes;i++)
	{
		for(int j=0;j<colonnes;j++)
		{
			printf("%d",matrice[i][j]);
		}
		printf("\n");
	}
}

/*----------------------separateur de fonction-----------------------------------------------*/


// Calculer la somme des matrices
