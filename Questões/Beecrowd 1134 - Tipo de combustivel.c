#include <stdio.h>

int main(){
	int codigo, alcool = 0, diesel = 0, gasolina = 0;
	
    do{
	    scanf("%d", &codigo);
	    
		if(codigo == 1)
		alcool++;
		
		else if(codigo == 2)
		gasolina++;
		
		else if(codigo == 3)
		diesel++;
	}while(codigo != 4);
	
	printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", alcool, gasolina, diesel);
	
	return 0;
}
