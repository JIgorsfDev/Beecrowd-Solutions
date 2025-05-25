#include <stdio.h>
int main(){
	int valor, auxiliar = 2;
	
	scanf("%d", &valor);
	
	if(5 < valor && valor < 2000){
		while(auxiliar <= valor){
			if(auxiliar % 2 == 0)
			printf("%d^2 = %d\n", auxiliar, auxiliar*auxiliar);
			
			auxiliar++;
		}
    }
    
	else
	return 1;
	
	
return 0;	
}
