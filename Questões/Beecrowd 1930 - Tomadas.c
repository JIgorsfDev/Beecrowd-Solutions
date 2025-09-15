#include <stdio.h>

int main(){
  int t1, t2, t3, t4, num_tomadas;

  scanf("%d %d %d %d", &t1, &t2, &t3, &t4);

  num_tomadas = t1 + t2 + t3 + t4 - 3;
  printf("%d\n", num_tomadas);

  return 0;
}
