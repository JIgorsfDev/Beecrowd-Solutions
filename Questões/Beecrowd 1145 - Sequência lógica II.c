#include <stdio.h>

int main(){
	int num1, num2, i;
	
	scanf("%d %d", &num1, &num2);
	
	if(num1 > 1 && num1 < 20 && num2 > num1 && num2 < 100000){ //condi��o da quest�o
		for(i = 1; i <= num2; i++){
			printf("%d", i);
			
			
			if(i % num1 == 0){
			printf("\n"); //a impress�o vai ate um n�mero x at� que ocorra a quebra de linha, logo, a pr�xima quebra ser� em x*2 (e assim vai) 
		    }else
		    printf(" ");
		}
	}
	
	return 0;
}
