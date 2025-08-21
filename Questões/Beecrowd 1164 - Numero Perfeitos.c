#include <stdio.h>

int main(){
  int testes, x, soma = 0;

  scanf("%d", &testes);

  while(testes != 0){
   scanf("%d", &x);

    for(int i = 1; i < x-1; i++){
      if(x % i == 0){
        soma += i;
      }
    }
    
    if(soma == x)
      printf("%d eh perfeito\n", x);

    else
      printf("%d nao eh perfeito\n", x);

    soma = 0;
    
    testes--;
  }


  return 0;
}
