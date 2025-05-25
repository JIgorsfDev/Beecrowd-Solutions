#include <stdio.h>
int main(){
	
	double cedulas, cedula1, cedula2;
	int cedulas_validas = 0;
	
	while(cedulas_validas != 2){
		scanf("%lf", &cedulas);
		
		if(cedulas >= 0 && cedulas <= 10){
		if(cedulas_validas == 0)
		cedula1 = cedulas;
	    
		else
		cedula2 = cedulas;
	   
	   cedulas_validas++;
	   }
	    
		else
	    puts("nota invalida");
	}
    
    
    printf("media = %.2lf\n", (cedula1 + cedula2) / 2);

return 0;
}
