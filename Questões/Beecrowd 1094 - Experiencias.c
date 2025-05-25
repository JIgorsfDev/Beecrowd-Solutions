#include <stdio.h>
int main(){
	int number_test, test, total = 0, rabbit = 0, rat = 0, frog = 0, aux;
	char type_test;
	double percent;
	
	scanf("%d", &number_test);
	for(aux = 0; aux < number_test; aux++){
	
	scanf("%d %c", &test, &type_test);
	if(1 <= test && test <= 15){
    switch(type_test){
    case 'C': case 'c': rabbit = rabbit + test; break;
    case 'R':case 'r' : rat = rat + test; break;
    case'S': case's': frog = frog + test; break;
	  }
	}
   }
	total = rabbit + rat + frog;
	
	printf("Total: %d cobaias\n", total);
	printf("Total de coelhos: %d\n", rabbit);
	printf("Total de ratos: %d\n", rat);
	printf("Total de sapos: %d\n", frog);
	
	percent = (double) rabbit / (double) total;
	printf("Percentual de coelhos: %.2lf %%\n", percent * 100);
	
	percent = (double) rat / (double) total;
	printf("Percentual de ratos: %.2lf %%\n", percent * 100);
	
	percent = (double) frog / (double) total;
	printf("Percentual de sapos: %.2lf %%\n", percent * 100);
   

return 0;
}
