#include <stdio.h> 

int main(){
    int qtde;

    scanf("%d", &qtde);
    
    int mat[qtde];
    float notas[qtde];
    int maior_mat;
    float maior_nota;

    for(int i = 0; i < qtde; i++){
        scanf("%d %f", &mat[i], &notas[i]);
    }

    for(int i = 0; i < qtde; i++){
        if(notas[i] > maior_nota){
            maior_nota = notas[i];
            maior_mat = mat[i];
        }
    }

    if(maior_nota >= 8){
        printf("%d\n", maior_mat);
    }else{
        printf("Minimum note not reached\n");
    }

  return 0;
}
