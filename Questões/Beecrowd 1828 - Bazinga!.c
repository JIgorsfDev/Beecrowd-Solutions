#include <stdio.h>
#include <string.h>

int main(){
  char sheldon[10], raj[10];
  int partidas, aux = 0;

  scanf("%d", &partidas);
  
  while(aux != partidas){
    scanf("%s %s", sheldon, raj);

    if(strcmp(sheldon, raj) == 0){
      printf("Caso #%d: De novo!\n", aux + 1);
      aux++;
    }      

    else if(strcmp(sheldon, "tesoura") == 0){
      if(strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)
        printf("Caso #%d: Bazinga!\n", aux + 1);

      else if(strcmp(raj, "Spock") == 0 || strcmp(raj, "pedra") == 0)
        printf("Caso #%d: Raj trapaceou!\n", aux + 1);

      aux++;
    }

    else if(strcmp(sheldon, "papel") == 0){
      if(strcmp(raj, "pedra") == 0 || strcmp(raj, "Spock") == 0)
        printf("Caso #%d: Bazinga!\n", aux + 1);

      else if(strcmp(raj, "tesoura") == 0 || strcmp(raj, "lagarto") == 0)
        printf("Caso #%d: Raj trapaceou!\n", aux + 1);

      aux++;
    }

    else if(strcmp(sheldon, "pedra") == 0){
      if(strcmp(raj, "lagarto") == 0 || strcmp(raj, "tesoura") == 0)
        printf("Caso #%d: Bazinga!\n", aux + 1);

      else if(strcmp(raj, "papel") == 0 || strcmp(raj, "Spock") == 0)
        printf("Caso #%d: Raj trapaceou!\n", aux + 1);

      aux++;
    }

    else if(strcmp(sheldon, "lagarto") == 0){
      if(strcmp(raj, "Spock") == 0 || strcmp(raj, "papel") == 0)
        printf("Caso #%d: Bazinga!\n", aux + 1);

      else if(strcmp(raj, "pedra") == 0 || strcmp(raj, "tesoura") == 0)
        printf("Caso #%d: Raj trapaceou!\n", aux + 1);

      aux++;
    }

    else if(strcmp(sheldon, "Spock") == 0){
      if(strcmp(raj, "tesoura") == 0 || strcmp(raj, "pedra") == 0)
        printf("Caso #%d: Bazinga!\n", aux + 1);

      else if(strcmp(raj, "papel") == 0 || strcmp(raj, "lagarto") == 0)
        printf("Caso #%d: Raj trapaceou!\n", aux + 1);

      aux++;
    }
  
}
  return 0;
}
