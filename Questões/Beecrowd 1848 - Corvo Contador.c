#include <stdio.h>
#include <string.h>

int main(){
  char corvo[8];
  int loteria = 0, grito = 0;

  while(grito != 3){
    
      scanf(" %[^\n]", corvo);

      if(strcmp(corvo, "caw caw") == 0){
        printf("%d\n", loteria);
        grito++;
        loteria = 0;
      }

        /*a logica da piscadela é que um olho aberto vale 1 e os fechados 0, mas em Binário!
        assim, por exemplo, o 1 binário é 001, no corvo, é 001, o 2 é 010, no corvo, -*-, e assim vai
        */
      else if(strcmp(corvo, "--*") == 0)
        loteria += 1;

      else if(strcmp(corvo, "-*-") == 0)
        loteria += 2;

      else if(strcmp(corvo, "*--") == 0)
        loteria += 4; 

      else if(strcmp(corvo, "-**") == 0)
        loteria += 3;

      else if(strcmp(corvo, "*-*") == 0)
        loteria += 5;

      else if(strcmp(corvo, "**-") == 0)
        loteria += 6;

      else if(strcmp(corvo, "***") == 0)
        loteria += 7;
  }

  return 0;
}
