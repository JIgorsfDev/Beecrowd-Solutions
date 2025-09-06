#include <stdio.h>

int main(){
  int pessoas;
  int menor_valor, menor_posicao;
  
  scanf("%d", &pessoas);

  int golpes[pessoas];

  for(int i = 0; i < pessoas; i++){
    scanf("%d", &golpes[i]);

    if(i == 0){
      menor_valor = golpes[i];
      menor_posicao = i;
    }

    else if(golpes[i] < menor_valor){
      menor_valor = golpes[i];
      menor_posicao = i;
    }

    else if(golpes[i] == menor_valor){
      if(i < menor_posicao)
        menor_posicao = i;

      else
        menor_posicao = menor_posicao;
    }
  }

   printf("%d\n", menor_posicao + 1);

  

  return 0;
}
