#include <stdio.h>

int main(){
    double vet[100], val;

    for(int i = 0; i < 100; i++){
      scanf("%lf", &val);
      vet[i] = val;
    }

    for(int i = 0; i < 100; i++){
      if(vet[i] <= 10)
        printf("A[%d] = %.1lf\n", i, vet[i]);
    }

  return 0;
}
