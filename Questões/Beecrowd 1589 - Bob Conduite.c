#include <stdio.h>

int main(){
  int raioc1, raioc2, conduite;
  int casos, aux = 0;

  scanf("%d", &casos);

  while(aux != casos){
    scanf("%d %d", &raioc1, &raioc2);

    conduite = raioc1 + raioc2;

    printf("%d\n", conduite);

    aux++;
  }


  return 0;
}
