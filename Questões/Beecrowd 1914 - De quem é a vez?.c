#include <stdio.h>
#include <string.h>

int main(){

  int casos, val1, val2, res;
  char jogador1[10], escolha1[10], jogador2[10], escolha2[10];

  scanf("%d", &casos);
  
  while(casos != 0){
    scanf("%s %s %s %s", jogador1, escolha1, jogador2, escolha2);
    scanf("%d %d", &val1, &val2);

    res = val1 + val2;

    if(strcmp(escolha1, "PAR") == 0 && strcmp(escolha2, "IMPAR") == 0){
      if(res % 2 == 0){
        printf("%s\n", jogador1);
      }
      else{
        printf("%s\n", jogador2);
      }
    }

    else if(strcmp(escolha1, "IMPAR") == 0 && strcmp(escolha2, "PAR") == 0){
      if(res % 2 == 0){
        printf("%s\n", jogador2);
      }
      else{
        printf("%s\n", jogador1);
      }
    }
    casos--;
    res = 0;
  }
   
  return 0;
}
