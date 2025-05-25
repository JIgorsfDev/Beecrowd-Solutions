#include <stdio.h>

//0 - 400 aumento de 15
//400.01 - 800 aumento de 12
//800.01 - 1200 aumento de 10
//1200.01 - 2000 aumento de 7
//acima de 2000 4

int main(){
	float salario, reajuste = 0;
	int percentual = 0;
	
	scanf("%f", &salario);
	
	if(salario > 0 && salario <= 400){
	reajuste = salario * 0.15;
	salario += salario * 0.15;
	percentual = 15;
    }else if(salario > 400 && salario <= 800){
	reajuste = salario * 0.12;
	salario += salario * 0.12;
	percentual = 12;
    }else if(salario > 800 && salario <= 1200){
	reajuste = salario * 0.10;
	salario += salario * 0.10;
	percentual = 10;
    }else if(salario > 1200 && salario <= 2000){
	reajuste = salario * 0.07;
	salario += salario * 0.07;
	percentual = 7;
    }else if(salario > 2000){
   	reajuste = salario * 0.04;
	salario += salario * 0.04;
	percentual = 4;
	}
	
	printf("Novo salario: %.2f\n", salario);
	printf("Reajuste ganho: %.2f\n", reajuste);
	printf("Em percentual: %d %%\n", percentual);
}
