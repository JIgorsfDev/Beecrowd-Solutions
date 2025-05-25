#include <stdio.h>
int main(){

int valor, auxiliar = 0, casos;

scanf("%d", &casos);

while(auxiliar != casos){
	scanf("%d", &valor);
	
	if(valor == 0)
	 puts("NULL");
	
	else{
	 if(valor % 2 == 0){
	 printf("EVEN");
     }
     
	 else{
	 printf("ODD");
     }
     
	 if(valor > 0){
	 printf(" POSITIVE\n");
     }
     
	 else{
	 printf(" NEGATIVE\n");
     }
	}
	auxiliar++;
  }

return 0;
}

