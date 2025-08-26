#include <stdio.h>
#include <ctype.h>

int main(){
  int linha;
  double mat[12][12], soma = 0, media = 0;
  char operacao;

  scanf("%d", &linha);
  scanf(" %c", &operacao);

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      scanf("%lf", &mat[i][j]);
      if(i == linha)
        soma += mat[i][j];
      }
    }
  operacao = toupper(operacao);

  switch(operacao){
    case 'S':
      printf("%.1lf\n", soma); break;
    case 'M': 
      media = soma / 12;
      printf("%.1lf\n", media); break;
    default: break;
  }
  return 0;
}
