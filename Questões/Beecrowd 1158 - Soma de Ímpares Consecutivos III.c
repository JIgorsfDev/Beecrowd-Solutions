
#include <stdio.h>

int main() {
  int testes, aux = 0, contador_somas = 0;
  int x, y; //x é o numero inicial, ja y é a quantidade de somas
  int soma = 0;

  scanf("%d", &testes);

  while(aux != testes){
    scanf("%d %d", &x, &y);

    while(contador_somas != y){
      if(x % 2 != 0){
        soma += x;
        contador_somas++;
      }
      x++;
    }
   
    printf("%d\n", soma);
    aux++;
    soma = 0;
    contador_somas = 0;
  }

  return 0;
}
