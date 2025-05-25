#include <stdio.h>

int main(){
	int v, i;
	
	scanf("%d", &v);
	
	for(i = 0; i <= v; i++){
		if(i % 2 == 1)
		printf("%d\n", i);
	}
	return 0;
}
