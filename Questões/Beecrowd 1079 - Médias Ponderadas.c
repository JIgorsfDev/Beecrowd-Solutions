#include <stdio.h>
int main(){
	
	int casos, aux = 0;
	double valor1, valor2, valor3, media_ponderada;
	
	scanf("%d", &casos);
	
	for(aux = 0; aux < casos; aux++){
		scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
		
		media_ponderada = ((valor1 * 2) + (valor2 * 3) + (valor3 * 5)) / 10 ;
		
		printf("%.1lf\n", media_ponderada);
	}

return 0;	
}
