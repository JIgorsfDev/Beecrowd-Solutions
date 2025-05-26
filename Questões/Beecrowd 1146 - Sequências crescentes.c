#include <stdio.h>

int main(){
	int num, i;
	
	do{
		scanf("%d", &num);
		
		for(i = 1; i <= num; i++){
			printf("%d", i);
			
			if(i != num)
			printf(" ");
			
			if(i == num)
			printf("\n");
		}
	}while(num != 0);
	
	return 0;
}
