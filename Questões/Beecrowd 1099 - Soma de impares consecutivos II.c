#include <stdio.h>

int main(){
	int x, y, i, impar = 0, casos, aux = 0, maior, menor, aux1 = 0;
	
	scanf("%d", &casos);
	
	while(aux != casos){
		scanf("%d %d", &x, &y);
		
		if (x > y){
			maior = x;
			menor = y;
		}
		
		else{
			maior = y;
			menor = x;
		}
		
		for(i = menor + 1; i < maior; i++){
			if(i % 2 == 1){
				aux1 = i;
				impar += aux1;
			}
		}
		
		printf("%d\n", impar);
		impar -= impar;
		aux++;
	}
	return 0;
}
