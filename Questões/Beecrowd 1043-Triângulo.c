#include <stdio.h>

float triangulo_perimetro(float ladoA, float ladoB, float ladoC); //q uis ser fresco aqui, tava aprendendo função e ai fiz assim...
float trapezio_area(float ladoA, float ladoB, float ladoC); // tem maneiras bem mais simples de se fazer

int main(){
	float a, b, c, area, perimetro;
	
	scanf("%f %f %f", &a, &b, &c);
	
    if(a + b > c && b + c > a && c + a > b){
	perimetro = triangulo_perimetro(a, b, c);
	printf("Perimetro = %.1f\n", perimetro);
    }
    
	else{
	area = trapezio_area(a, b, c);
	printf("Area = %.1f\n", area);
    }
	
return 0;	
}

float triangulo_perimetro(float ladoA, float ladoB, float ladoC){
    float soma = ladoA + ladoB + ladoC;
    return soma;
}

float trapezio_area(float ladoA, float ladoB, float ladoC){
	float multiplicacao = ((ladoA + ladoB) * ladoC) / 2;
	return multiplicacao;
}
