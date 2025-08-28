#include <stdio.h>
#include <ctype.h>

int main(){
  char operacao;
  double m[12][12], soma = 0, media = 0;

  scanf(" %c", &operacao);

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      scanf("%lf", &m[i][j]);

      if(i > j && (i + j) > 11){
        soma += m[i][j];
      }
    }
  }
     
  operacao = toupper(operacao);

  switch(operacao){
    case 'S': printf("%.1lf\n", soma); break;
    case 'M': media = soma/30; printf("%.1lf\n", media); break;
    default: break;
  }

  return 0;
}
