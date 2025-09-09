#include <stdio.h>

int main(){
  int casos, tentativa, resultado = 1;

  scanf("%d", &casos);

  while(casos != 0){
    scanf("%d", &tentativa);

    for(int i = 1; i < tentativa; i++){
      if(i % 2 == 0)
        resultado += 1;

      else
        resultado -= 1;
    }

    printf("%d\n", resultado);
    resultado = 1;
    casos--;
  }
  


  return 0;
}
