#include <stdio.h>

int main(){
    int dia_i, dia_f, hora_i, hora_f;
    int min_i, min_f, seg_i, seg_f;
    int aux1 = 0, aux2 = 0, aux3 = 0;
    
    scanf(" Dia %d", &dia_i);
    scanf("%d : %d : %d", &hora_i, &min_i, &seg_i);
    scanf(" Dia %d", &dia_f);
    scanf("%d : %d : %d", &hora_f, &min_f, &seg_f);
    
    if (dia_i < 1 || dia_i > 30 || dia_f < 1 || dia_f > 30) 
        return 1;
    
    
    aux1 = (dia_i * 86400) + (hora_i * 3600) + (min_i * 60) + seg_i;
    aux2 = (dia_f * 86400) + (hora_f * 3600) + (min_f * 60) + seg_f;
    aux3 = aux2 - aux1;
    
    if (aux3 < 60) 
        return 1;
    

    printf("%d dia(s)\n", aux3 / 86400);
    aux3 = aux3 % 86400;
    
    printf("%d hora(s)\n", aux3 / 3600);
    aux3 = aux3 % 3600;
    
    printf("%d minuto(s)\n", aux3 / 60);
    aux3 = aux3 % 60;
    
    printf("%d segundo(s)\n", aux3);
    
    return 0;
}

