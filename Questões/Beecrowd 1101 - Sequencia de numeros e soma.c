#include <stdio.h>

void main(){
	int x, y, maior, menor, sum = 0, i, aux = 1;
	
	do{
		scanf("%d %d", &x, &y);
		
	  if(x * y > 0){
		if(x > y){
			maior = x;
			menor = y;
		}
		else{
			maior = y; 
			menor = x;
		}
		
		for(i = menor; i <= maior; i++){
			printf("%d", i);
			
			if(i <= maior - 1)
			printf(" ");
			
			sum += i;
		}
		
		printf(" Sum=%d\n", sum);
		sum-=sum;
		}
	  else
	  aux--;
	}while(aux != 0);
}
