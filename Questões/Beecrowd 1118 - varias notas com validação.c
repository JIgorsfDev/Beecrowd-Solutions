#include <stdio.h>

int main(){
	
	double nota, media = 0.0;
	int aux = 0, resposta, aux2 = 0;
	
	while(aux != 2){
		scanf("%lf", &nota);
		
		if(nota < 0 || nota > 10)
		printf("nota invalida\n");
		
		else{
			media += nota;
			aux++;
		}
	}
	
	printf("media = %.2lf\n", media/2);
	
	while(aux2 != 1){
	printf("novo calculo (1-sim 2-nao)\n");
	scanf("%d", &resposta);
	
	if(resposta == 1){
		aux -= aux;
		media -= media;
		
	   	while(aux != 2){
		scanf("%lf", &nota);
		
		if(nota < 0 || nota > 10)
		printf("nota invalida\n");
		
		else{
			media += nota;
			aux++;
		}
	}
		printf("media = %.2lf\n", media/2);
	}
	
	else if (resposta == 2)
	    aux2++;
	}
	
	return 0;
}
