#include <stdio.h>

int main(){
	int num = 0;
	
	for(num = 1; num <= 100; num++){
		if(num % 2 == 0)
		printf("%d\n", num);
	}
	
	return 0;
}
