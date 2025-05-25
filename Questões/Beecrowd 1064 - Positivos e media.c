#include <stdio.h>

int main(){
	float valor, media = 0;
	int aux = 0, contador = 0;
	
	while(aux != 6){
		
		scanf("%f", &valor);
		
		 if(valor > 0){
		 	media += valor;
		 	contador++;
		 }
		
		aux++;
	}
	
	printf("%d valores positivos\n", contador);
	printf("%.1f\n", media / contador);
	
	return 0;
}
