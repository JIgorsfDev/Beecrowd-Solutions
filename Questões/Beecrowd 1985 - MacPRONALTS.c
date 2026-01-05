#include <stdio.h>

int main(){
  int casos;

  scanf("%d", &casos);

  int cod[casos];
  float qtde[casos];

  for(int i = 0; i < casos; i++){
    scanf("%d %f", &cod[i], &qtde[i]);
  }

  float total = 0;

  for(int i = 0; i < casos; i++){
   switch(cod[i]){
     case 1001: total += qtde[i] * 1.50; break;
     case 1002: total += qtde[i] * 2.50; break;
     case 1003: total += qtde[i] * 3.50; break;
     case 1004: total += qtde[i] * 4.50; break;
     case 1005: total += qtde[i] * 5.50; break;
   }
  }

  printf("%.2f\n", total);

  return 0;
}
