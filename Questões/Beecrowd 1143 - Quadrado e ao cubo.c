#include <stdio.h>

int main(){
	int i, quest, v1 = 1, v2 = 1, v3 = 1;
	
	scanf("%d", &quest);
	
	if(quest > 1 && quest < 1000){ //condição da questão
	
	for(i = 0; i < quest; i++){
		printf("%d %d %d\n", v1, v2*v2, v3*v3*v3);  //outra solução é com a biblioteca math.h, usando pow(base, potencia);
		v1++;
		v2++;
		v3++;
	   }
	}
	return 0;
}
