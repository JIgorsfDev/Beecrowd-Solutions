#include <stdio.h>

void valores_comparar(int valorA, int valorB);

int main(){
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	valores_comparar(a, b);
	
return 0;
}

void valores_comparar(int valorA, int valorB){
	if(valorB % valorA == 0 || valorA % valorB == 0)
	printf("Sao Multiplos\n");
	
	else
	printf("Nao sao Multiplos\n");
}
