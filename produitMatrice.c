#include<stdio.h>
#define MAX 50
int main(){
 int i,j,n,k;
 int A[MAX][MAX];
 int B[MAX][MAX];
 int C[MAX][MAX];
 
 printf("Entrer la dimension de la matrice dont vous souhaitez faire le produit :\n");
 scanf("%d",&n);
  printf("Entrez les valeurs de la matrice A[i][j]:\n");
 for(i=0;i<n;i++){
   for(j=0;j<n;j++){
     scanf("%d",&A[i][j]);
     }
       }
  printf("Entrez les valeurs de la matrice B[i][j]:\n");
 for(i=0;i<n;i++){
   for(j=0;j<n;j++){
     scanf("%d",&B[i][j]);
     }
       }
  for(i=0;i<n;i++){
   for(j=0;j<n;j++){
        C[i][j]=0;
      for(k=0;k<n;k++){
       C[i][j]+=A[i][k]*B[k][j];
       }
         }
          }        
 printf("Matrice produit C=A*B;\n");
  for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      printf("%d",C[i][j]);
      }
      printf("\n");
     }
     return 0;
     }
