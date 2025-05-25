#include <stdio.h>
int main(){
	int a, b, i, soma = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a > b){
		for(i = a - 1; i > b; i--){
			if(i % 2 != 0)
			soma += i;
			}
		printf("%d\n", soma);
	}
	
	else if(b > a){
		for(i = b + 1; i < a; i++){
			if(i % 2 != 0)
			soma += i;
			}
		printf("%d\n", soma);
	}
	
	else if(a == b){
		if(a % 2 == 0 || b % 2 == 0)
		    soma = 0;
		
		else
	    	soma = a;
		
	    printf("%d\n", soma);
	}
    
    return 0;
}
