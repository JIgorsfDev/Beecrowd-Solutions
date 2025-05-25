#include <stdio.h>
int main(){
	int a, i = 0;
	
	scanf("%d", &a);
	
    while(i != 6){
      if(a % 2 != 0){
      printf("%d\n", a);
    i++;
    }
    
    a++;
	}
    
    return 0;
}
