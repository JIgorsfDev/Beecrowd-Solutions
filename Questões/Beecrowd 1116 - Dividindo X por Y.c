#include <stdio.h>

int main(){
	int x, y, casos, aux = 0;
	
	scanf("%d", &casos);
	
	while(aux != casos){
		scanf("%d %d", &x, &y);
		
		if(x != 0 && y == 0)
		printf("divisao impossivel\n");
		
		else
		printf("%.1f\n", (float) x / (float) y);
		
		aux++;
	}
	return 0;
}
