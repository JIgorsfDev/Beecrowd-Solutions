#include <stdio.h>

int main(){
   int vet[20], aux[20], val;

   for(int i = 0; i < 20; i++){
     scanf("%d", &val);
     vet[i] = val;
     aux[i] = val;
   }

   for(int i = 0; i < 20; i++){
       int j = 19 - i;
       vet[i] = aux[j];
     }

     for(int k = 0; k < 20; k++){
       printf("N[%d] = %d\n", k, vet[k]);
     }

  return 0;
}
