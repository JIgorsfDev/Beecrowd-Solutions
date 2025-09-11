#include <stdio.h>
#include <string.h>

int main(){

   int casos;
   char nomecurso[40];

   scanf("%d", &casos);

   while(casos != 0){
      scanf(" %[^\n]", nomecurso);
      casos--;
   }
  
  printf("Ciencia da Computacao\n");

  return 0;
}
