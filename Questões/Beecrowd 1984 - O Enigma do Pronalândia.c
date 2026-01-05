#include <stdio.h>
#include <string.h>

int main(){
  long long int val;

  scanf("%lld", &val);

  char str[100];
  sprintf(str, "%lld", val); //converter o lld para a String

  for(int i = strlen(str) - 1; i >= 0; i--){ //percorrer a string, pelo tamanho, de tras para frente. o -1 é para nao pegar o \0
    printf("%c", str[i]);
  }

  printf("\n");

  return 0;
}
