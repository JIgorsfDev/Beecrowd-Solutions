#include <stdio.h>

int main(){
	
	int partida = 1, gremio, inter, vg = 0, vi = 0, empate = 0;
	int resposta;
	
	do{
	scanf("%d %d", &inter, &gremio);
	
	
	if(gremio > inter)
	vg++;
	
	else if (gremio < inter)
	vi++;
	
	else
	empate++;
	
	printf("Novo grenal (1-sim 2-nao)\n");
	scanf("%d", &resposta);
	
	if(resposta == 1)
		partida++;
		
   
   }while(resposta != 2);
	
	printf("%d grenais\n", partida);
	printf("Inter:%d\n", vi);
	printf("Gremio:%d\n", vg);
	printf("Empates:%d\n", empate);
	
	if(vg > vi)
	printf("Gremio venceu mais\n");
	
	else if(vg < vi)
	printf("Inter venceu mais\n");
	
	else
	printf("Nao houve vencedor\n");
	return 0;
} 
