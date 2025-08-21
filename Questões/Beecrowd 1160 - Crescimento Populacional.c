#include <stdio.h>

int main(){
    int t;
    int PA, PB;
    double G1, G2;
    int anos, contador = 0;

    scanf("%d", &t);

        while(contador != t){
            scanf("%d %d %lf %lf", &PA, &PB, &G1, &G2);
                    anos = 0;
                    while(PA <= PB && anos <= 100){
                        PA += (int)(PA * G1 / 100);
                        PB += (int)(PB * G2 / 100);
                        anos++;
                    }
                    if(anos > 100)
                        printf("Mais de 1 seculo.\n");
                    else
                        printf("%d anos.\n", anos);
            contador++;
        }
    
    return 0;
}
