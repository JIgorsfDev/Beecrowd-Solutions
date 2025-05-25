#include <stdio.h>

int main() {
	int i = 1, j, aux = 7, aux2 = 5;
    for (i = 1; i <= 9; i += 2) { 
        for (j = aux; j >= aux2; j--) { 
            printf("I=%d J=%d\n", i, j);
        }
        aux = aux + 2;
        aux2 = aux2 + 2;
    }

    return 0;
}
