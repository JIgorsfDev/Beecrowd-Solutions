#include <stdio.h>

int main(){
   int testes;
   int num;
   int cont;

  scanf("%d", &testes);

  while(testes != 0){

    scanf("%d", &num);

    for(int i = 2; i < num; i++){
      if(num % i == 0) //o loop nao passa por 1 e nem por ele mesmo, entao se ele for divisivel por i, ele nao sera primo
        cont = 1; //contador para avisar que o numero nao eh primo
    }
      if(cont == 1 || num == 1)
        printf("%d nao eh primo\n", num);
      else if(cont != 1 && num > 1)
        printf("%d eh primo\n", num);

    cont = 0;
    testes--;
  }


  return 0;
}
