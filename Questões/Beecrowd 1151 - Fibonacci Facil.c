#include <stdio.h>

int main(){
	int casos, x = 0, y = 1, z, i;
	
	scanf("%d", &casos);
	
	if(casos > 0 && casos < 46){ //condição da questão
	
	printf("%d %d ", x, y);

	
	for(i = 3; i <= casos; i++){
		z = x + y;
		x = y;
		y = z;
		
		printf("%d", z);
		
		if(i != casos)
		printf(" ");
		
		else
		printf("\n");
	}
  }
	return 0;
}
