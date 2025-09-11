#include <stdio.h>

int main(){
  int d1, d2, d3, d2d1, d3d2, situacao;

  //em situação, 1 - feliz, 0 - triste
  scanf("%d %d %d", &d1, &d2, &d3);

  d2d1 = d2 - d1;
  d3d2 = d3 - d2;

  if(d1 > d2 && d2 <= d3)
    situacao = 1;

  else if(d1 < d2 && d2 >= d3)
    situacao = 0;

  else if(d1 < d2 && d2 < d3 && d3d2 < d2d1)
    situacao = 0;

  else if(d1 < d2 && d2 < d3 && d3d2 >= d2d1)
    situacao = 1;

  else if(d1 > d2 && d2 > d3 && d3d2 > d2d1)
    situacao = 1;

  else if(d1 > d2 && d2 > d3 && d3d2 <= d2d1)
    situacao = 0;

  else if(d1 == d2 && d2 < d3)
    situacao = 1;

  else if(d1 == d2 && d2 >= d3)
    situacao = 0;

  if(situacao == 1)
    printf(":)\n");

  else
    printf(":(\n");

  return 0;
  
}
