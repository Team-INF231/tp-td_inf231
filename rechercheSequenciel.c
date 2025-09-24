#include<stdio.h>
#define MAX 100
int main(){
 int n,x,i;
 int tab[MAX];
 
 printf("Entrer la taille de votre tableaux (attention ne dois pas dépassser 100 elts):\n");
 scanf("%d",&n);
 printf("Entrer les elements de votre tableau :\n");
  for(i=0;i<n;i++){
 scanf("%d",&tab[i]);}
 printf("Entrer l'élement que vous rechercher dans votre tableau:\n");
 scanf("%d",&x);
  for(i=0;i<n;i++){
   if (tab[i]==x){
   printf("trouvé\n");
    return i;
   }
    else{
    printf("pas trouvé\n");}
    }
    return 0;
     }
