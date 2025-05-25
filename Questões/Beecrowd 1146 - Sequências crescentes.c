#include <stdio.h>
int main(){
	int i, numero;
	
	do{
		scanf("%d", &numero);
		
		if(numero > 0){
		for(i = 1; i < numero; i++)
		printf("%d ", i);
		
		printf("%d\n", i);
	    }
	}while(numero != 0);
	
    return 0;
}
