#include <stdio.h> 

int main(){
  double val, v[100];

  scanf("%lf", &val);

  for(int i = 0; i < 100; i++){
    v[i] = val;
    val /= 2;
  }

  for(int i = 0; i < 100; i++){
    printf("N[%d] = %.4lf\n", i, v[i]);
  }

  return 0;
}
