#include <stdio.h>

int main() {
    int casos, i, v1 = 1, v2 = 1, v3 = 1;
    
    scanf("%d", &casos);

    for (i = 0; i < casos; i++) {
     printf("%d %d %d\n", v1, v1*v1, v1*v1*v1);
     printf("%d %d %d\n", v1, (v1 * v1) + 1, (v1*v1*v1) + 1); //essa logica difere do que a questão pede, que seria imprimir n*2 linhas, mas desse jeito também funciona
     v1++;
    }

    return 0;
}

