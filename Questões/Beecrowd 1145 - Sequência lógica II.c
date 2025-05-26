#include <stdio.h>

int main(){
	int num1, num2, i;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1 > 1 && num1 < 20 && num2 > num1 && num2 < 100000){ //condição da questão
		for(i = 1; i <= num2; i++){
			printf("%d", i);
			
			
			if(i % num1 == 0){
			printf("\n"); //a impressão vai ate um número x até que ocorra a quebra de linha, logo, a próxima quebra será em x*2 (e assim vai) 
		    }else
		    printf(" ");
		}
	}
	
	return 0;
}
