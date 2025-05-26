#include <stdio.h>

int main(){
	int x, z, i, soma = 0, cont = 0;
	scanf("%d", &x);
	
	do{
		scanf("%d", &z);
	}while(z <= x);
	
	for(i = x; i <= z; i++){
		if(soma < z){
			soma += i;
			cont++;
		}
	}
	
	printf("%d", cont);
	return 0;
}
