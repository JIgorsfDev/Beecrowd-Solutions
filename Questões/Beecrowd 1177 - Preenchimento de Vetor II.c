#include <stdio.h>

int main(){
 int t, vet[1000], aux = 0;
  
  scanf("%d", &t);
  
    for(int i = 0; i < 1000; i++){
      if(aux < t){
      vet[i] = aux;
      aux++;
      }
      else{
        vet[i] = 0;
        aux = 1;
      }
        
      printf("N[%d] = %d\n", i, vet[i]);
    }
  return 0;
}
