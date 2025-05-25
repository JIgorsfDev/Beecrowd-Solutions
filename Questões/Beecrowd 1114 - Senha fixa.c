#include <stdio.h>

int main(){
	int senha, aux = 1;
	
	while(aux != 0){
		scanf("%d", &senha);
		
		if(senha != 2002)
		printf("Senha Invalida\n");
		
		else{
		printf("Acesso Permitido\n");	
		aux--;
		}
	}
	return 0;
}
