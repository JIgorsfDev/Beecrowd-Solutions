#include <stdio.h>

int main(){
    int vet[10], val;

    scanf("%d", &val);

    for(int i = 0; i < 10; i++){
        vet[i] = val;
        val *= 2;
    }

    for(int i = 0; i < 10; i++)
        printf("N[%d] = %d\n", i, vet[i]);

  return 0;
}
