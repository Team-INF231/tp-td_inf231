#include <stdio.h>
#include <stdbool.h>

bool estTrieCroissant(int tab[], int n){
      for(int i=0; i<n - 1; i++){
         if(tab[i]  > tab[i + 1]){
           return false;
         }
      }
      return true;
}

bool estTrieDecroissant(int tab[], int n){
      for(int i=0; i<n-1; i++){
          if(tab[i] < tab[i+1]){
             return false;
          }
      }
      return true;
}

int main(){
   int n;
   printf("Entrer la taille du tableau:");
   scanf("%d", &n);
   
   int tab[n];
   printf("Entrer les elements du tableau :\n");
   for(int i=0; i<n; i++){
         scanf("%d", &tab[i]);
   }
   
   if(estTrieCroissant(tab, n)){
       printf("Le tableau est trie en ordre croissant.\n");
   }else if(estTrieDecroissant(tab, n)){
        printf("Le tableau est trie en ordre decroissant.\n");
   }else {
       printf("Le tableau n'est pas trie.\n");
   }
   
   return 0;
}

