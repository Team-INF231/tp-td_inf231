#include <stdio.h>

void trier(int tab[], int n){
       for(int i=0; i<n-1; i++){
            int min = i;
            for(int j=i+1; j<n; j++){
                 if(tab[j] <  tab[min])
                     min = j;
            }
            
            int temp = tab[i];
            tab[i] = tab[min];
            tab[min] = temp;
       }
}

int main(){
   int n;
   printf("Entrer la taille du tableau:");
   scanf("%d", &n);
   
   int tab[n];
   
   printf("Entrer les elements du tableau:\n");
   for(int i=0; i<n; i++){
       printf("Element %d:", i);
       scanf("%d", &tab[i]);
   }
   
   trier(tab, n);
   
   printf("Tableau trié:");
   for(int i=0; i<n; i++){
       printf("%d", tab[i]);
   }
   
   printf("\n");
   
   float mediane;
   if(n % 2 == 0)
        mediane = (tab[n/2 - 1] + tab[n/2]) / 2.0;
        else
            mediane = tab[n/2];
            
            printf("La mediane est : %.2f\n", mediane);
            
            return 0;
}
