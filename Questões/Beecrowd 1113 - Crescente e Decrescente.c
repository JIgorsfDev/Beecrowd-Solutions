#include <stdio.h>
int main(){
	int x, y;
	
	while(x != y){
	  scanf("%d %d", &x, &y);
	   
	   if(x > y)
	   puts("Decrescente");
	   
	   else if(x < y)
	   puts("Crescente");
	}
	
return 0;
}
