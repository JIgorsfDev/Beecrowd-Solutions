#include <stdio.h>

int main(){
	int num, fib = 1, i;
	
	scanf("%d", &num);
	 
	if(num > 0 && num < 13){ //condi��o da quest�o
	
	for(i = num; i > 1; i--){
		fib *= i;
	}
	
	printf("%d\n", fib);
	}
	return 0;
}
