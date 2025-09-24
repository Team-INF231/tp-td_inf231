#include <stdio.h>

int main(){
   int a, b, prod=0;
   
   printf("Entrer deux entiers positifs (a et b):");
   scanf("%d %d", &a, &b);
   if(a  > 0 && b > 0){
       prod = a * b;
       printf("Le produit de %d et %d est : %d\n", a, b, prod);
   
      
   }else{
       printf("Erreur: a et b doivent etre strictement positifs .\n");
   }
   
   return 0;
   
}
