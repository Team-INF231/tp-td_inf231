#include <stdio.h>
#include <stdlib.h>

int main(){
   int n,m; 
   printf("Entrer la taille du vecteur (n):");
   scanf("%d", &n);
   
   printf("Entrer la taille du vecteur (m):");
   scanf("%d", &m);
  
   int vecteur[n], matrice[n][m], resultat[m];
   
   printf("Entrer les éléments du vecteur:\n");
   for(int i=0; i<n; i++){
      printf("V[%d] = ", i);
      scanf("%d", &vecteur[i]);
   }
   
   printf("Entrer les éléments de la matrice(%d*%d):\n", n, m);
   for(int i=0; i<n; i++){
      for(int j=0; j<m; j++){
          printf("M[%d][%d]=", i, j);
          scanf("%d", &matrice[i][j]);
      
      }
  }
  for(int j=0; j<m; j++){
     resultat[j] = 0;
     for(int i=0; i<n; i++){
     resultat[j] += vecteur[i] * matrice[i][j];
     
     }
  }
  
  printf("Resultat du produit vecteur * matrice:\n");
  for(int j=0; j<m; j++){
     printf("R[%d] = %d\n", j, resultat[j]);
  }
  
  return 0;
  
}
