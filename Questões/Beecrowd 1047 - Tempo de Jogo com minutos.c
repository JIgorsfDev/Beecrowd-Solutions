#include <stdio.h>

int main(){
	int hi, hf, mi, mf, aux1, aux2, aux3;
	
	scanf("%d %d %d %d", &hi, &mi, &hf, &mf);
	
	
	
	if(hi == hf && mi == mf)
	printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
	
	else{
		aux1 = (hf * 60) + mf;
		aux2 = (hi * 60) + mi;
		aux3 = aux1 - aux2;
		
		if(aux3 < 0)
		  aux3 += 1440; //adicao das 24 hrs
		
		printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", aux3 / 60, aux3 % 60);
	}
	
	return 0;
}
