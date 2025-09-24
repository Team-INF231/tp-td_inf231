#include<stdio.h>
#define MAX 50
int main(){
 int i,j,n;
 int A[MAX][MAX];
 int B[MAX][MAX];
 int C[MAX][MAX];
 
 printf("Entrer la dimension de la matrice dont vous souhaitez sommer :\n");
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
       C[i][j]=A[i][j]+B[i][j];
       }
        }
        
 printf("Matrice somme C=A+B;\n");
  for(i=0;i<n;i++){
   for(j=0;j<n;j++){
      printf("%d",C[i][j]);
      }
      printf("\n");
     }
     return 0;
     }
