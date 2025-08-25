#include <stdio.h>

int main(){
  int val, menor, posicao;
  scanf("%d", &val);

  int vet[val];
  
  for(int i = 0; i < val; i++){
    scanf("%d", &vet[i]);

    if(i > 0 && vet[i] < menor){
      menor = vet[i];
      posicao = i;
    }
    else if(i == 0){
      menor = vet[0];
      posicao = 0;
    }
  }
  printf("Menor valor: %d\n", menor);
  printf("Posicao: %d\n", posicao);
  return 0;
}
