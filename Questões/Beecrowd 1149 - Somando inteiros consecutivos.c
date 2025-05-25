#include <stdio.h>
int main(){
	int numero, soma = 0, contador = 0, i, aux;
	
	scanf("%d", &numero);
	while(contador != 1){
		scanf("%d", &aux);
		
		if(aux > 0){
		for(i = 0; i < aux; i++)
		soma += (numero + i);
		contador++;
	    }
	   }   
	printf("%d\n", soma);
	
	return 0;
}
