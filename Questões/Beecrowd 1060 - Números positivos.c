#include <stdio.h>

int main(){
	float valor;
	int aux = 0, contador = 0;
	
	while(aux != 6){
		scanf("%f", &valor);
		
		if(valor > 0)
		contador++;
		
		aux++;
	}
	
	printf("%d valores positivos\n", contador);
	
	return 0;
}
