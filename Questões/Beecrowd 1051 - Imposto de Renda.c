#include <stdio.h>

int main(){
	float salario, aux = 0;
	
	scanf("%f", &salario);
	
	if(salario <= 2000)
	printf("Isento\n");
	
	else{
		if(salario > 2000 && salario <= 3000){
			salario -= 2000;
			salario *= 0.08;
			printf("R$ %.2f\n", salario);
		}else if(salario > 3000 && salario <= 4500){
			salario -= 2000;
			aux = salario - 1000.0;
			printf("R$ %.2f\n", 1000.0 * 0.08 + aux * 0.18);
		}else if(salario > 4500){
		    salario -= 2000;
		    aux = salario - 2500;
			printf("R$ %.2f\n", 1000.0 * 0.08 + 1500.0 * 0.18 + aux * 0.28);
		}
	}        
	
    
    return 0;
}
