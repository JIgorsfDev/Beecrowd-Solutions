#include <stdio.h>

int main(){
  int x, soma = 0, contador_consecutivos = 0, aux = 0;

  while(aux != 1){
    scanf("%d", &x);

    if(x != 0){
     while(contador_consecutivos != 5){
      if(x % 2 == 0){
        soma += x;
        contador_consecutivos++;
      }
      x++;
    }
    printf("%d\n", soma);
    soma = 0;
    contador_consecutivos = 0;
    }
    else
      aux++;
  }
   
  return 0;
}
