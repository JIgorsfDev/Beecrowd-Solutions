#include <stdio.h>

int main(){
	int valor, contador = 0, aux = 0;
	
	while(aux != 5){
	scanf("%d", &valor);
	
	if(valor % 2 == 0)
	contador++;
	
	aux++;
    }
    
    printf("%d valores pares\n", contador);
    
    return 0;
}
