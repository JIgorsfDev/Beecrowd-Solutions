#include <stdio.h>

int main() {
    float i = 0, j = 1;
    int aux1 = 0;
    
    while (i <= 2.01) {
        if ((i - (int)i) < 0.0001)
            printf("I=%d ", (int)i);
        else
            printf("I=%.1f ", i);

        if (((j + aux1) - (int)(j + aux1)) < 0.0001)
            printf("J=%d\n", (int)(j + aux1));
        else
            printf("J=%.1f\n", j + aux1);

        aux1++;

        if (aux1 == 3) {
            aux1 = 0;
            i += 0.2;
            j += 0.2;
        }
    }

    return 0;
}
