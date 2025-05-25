#include <stdio.h>

int main(){
	int valor, cont = 0, contadorP = 0, contadorI = 0, contadorN = 0, contadorPOS = 0;

    while(cont != 5){
    	scanf("%d", &valor);
    	
    	if(valor > 0){
    	contadorPOS++;
		}else if(valor < 0){
			contadorN++;
		}
		
		if(valor % 2 == 0){
			contadorP++;
		}else{
			contadorI++;
		}
		cont++;
	}
	printf("%d valor(es) par(es)\n", contadorP);
	printf("%d valor(es) impar(es)\n", contadorI);
	printf("%d valor(es) positivo(s)\n", contadorPOS);
	printf("%d valor(es) negativo(s)\n", contadorN);    
	
	return 0;       
}
