#include <stdio.h>
int main(){
	int casos, valor, auxiliar, contador_in = 0, contador_out = 0;
	
	scanf("%d", &casos);
	
	if(casos < 10000){
	  for(auxiliar = 0; auxiliar < casos; auxiliar++){
		scanf("%d", &valor);
		
	  	if(valor >= 10 && valor <= 20)
		contador_in++;
		
		else
		contador_out++;
	}
	
	  printf("%d in\n", contador_in);
	  printf("%d out\n", contador_out);
    }
    
    else
    return 1;
    
return 0;
}
