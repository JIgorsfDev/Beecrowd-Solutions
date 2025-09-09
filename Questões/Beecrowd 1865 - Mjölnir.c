#include <stdio.h>
#include <string.h>

int main(){
  int forca, testes;
  char nome[10];

  scanf("%d", &testes);

  while(testes != 0){
  scanf("%s %d", nome, &forca);

  if(strcmp(nome, "Thor") == 0){
    printf("Y\n");
  }

  else
    printf("N\n");

    testes--;
  }

  return 0;
}
