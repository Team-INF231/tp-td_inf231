#include <stdio.h>

void inverserTableau(int tab[], int taille){
      int debut=0, fin=taille-1;
      while(debut<fin){
           int temp = tab[debut];
           tab[debut] = tab[fin];
           tab[fin] = temp;
           debut++;
           fin--;
      } 
}


int main(){
   int i;
   int tab[] = {1,2,3,4,5,6};
   int taille = sizeof(tab) / sizeof(tab[0]);
   
   printf("Tableau avant inversion :");
   for(i=0; i<taille; i++){
       printf("%d", tab[i]);
   }
   
   inverserTableau(tab, taille);
   
   printf("\n\nTableau après inversion:\n");
   for(i=0; i<taille; i++){
        printf("%d", tab[i]);
   }
    
      return 0;
   
   
}
   
