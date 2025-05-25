#include <stdio.h>
#include <string.h>

int main() {
    char estrutura_corporal[20], especie[20], alimentacao[20];
    
    setbuf(stdin, NULL);
    
    scanf("%s", estrutura_corporal);
    scanf("%s", especie);
    scanf("%s", alimentacao);
    
    if (strcmp(estrutura_corporal, "vertebrado") == 0) {
        if (strcmp(especie, "ave") == 0) {
            if (strcmp(alimentacao, "carnivoro") == 0) {
                printf("aguia\n");
            } else if (strcmp(alimentacao, "onivoro") == 0) {
                printf("pomba\n");
            }
        } else if (strcmp(especie, "mamifero") == 0) {
            if (strcmp(alimentacao, "onivoro") == 0) {
                printf("homem\n");
            } else if (strcmp(alimentacao, "herbivoro") == 0) {
                printf("vaca\n");
            }
        }
    } else if (strcmp(estrutura_corporal, "invertebrado") == 0) {
        if (strcmp(especie, "inseto") == 0) {
            if (strcmp(alimentacao, "hematofogo") == 0) {
                printf("pulga\n");
            } else if (strcmp(alimentacao, "herbivoro") == 0) {
                printf("lagarta\n");
            }
        } else if (strcmp(especie, "anelideo") == 0) {
            if (strcmp(alimentacao, "hematofogo") == 0) {
                printf("sanguessuga\n");
            } else if (strcmp(alimentacao, "onivoro") == 0) {
                printf("minhoca\n");
            }
        }
    }
    return 0;
}
