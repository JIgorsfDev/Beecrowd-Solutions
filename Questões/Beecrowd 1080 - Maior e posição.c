#include <stdio.h>
int main(){
	int number, aux, bigger, position_bigger;
	
	for(aux = 1; aux <= 100; aux++){
		scanf("%d", &number);
		
		if(number > bigger){
		bigger = number;
		position_bigger = aux;
	    }
	}
    
    printf("%d\n", bigger);
    printf("%d\n", position_bigger);

return 0;
}
