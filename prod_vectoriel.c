#include <stdio.h>
#include <stdlib.h>

void produit_vectoriel(const double a[3], const double b[3], double r[3]){
     r[0] = a[1]*b[2] - a[2]*b[1];
     r[1] = a[2]*b[0] - a[0]*b[2];
     r[2] = a[0]*b[1] - a[1]*b[0];
}

int main(void){
   double  a[3], b[3], r[3];
   printf ("Entrer les 3 composants du vecteur a (separees par des espaces): \n");
   if(scanf("%lf %lf %lf", &a[0], &a[1], &a[2]) != 3){
       fprintf(stderr, "lecture du vecteur a echouee.\n");
       return EXIT_FAILURE;
   }
   
   printf("Entrer les 3 composantes du vecteur b (separees par des espaces):\n");
   if(scanf("%lf %lf %lf", &b[0], &b[1], &b[2]) != 3){
        fprintf(stderr, "Lecture du vecteur b echouee.\n");
        return EXIT_FAILURE;
   }
   
   produit_vectoriel(a, b, r);
   
   printf("\nProduit vectoriel a*b = (%.6g, %.6g, %.6g)\n", r[0], r[1], r[2]);
   return EXIT_SUCCESS;
}
