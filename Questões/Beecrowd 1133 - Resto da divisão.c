#include <stdio.h>

int main(){
	int v1, v2, maior = 0, menor = 0, i = 0;
	
	scanf("%d %d", &v1, &v2);
	
	if(v1 > 0 && v2 > 0){
	
	  if(v1 > v2){
		maior = v1;
		menor = v2;
	   }
	
	  else{
	 	maior = v2;
		menor = v1;
	   }
	
      for(i = menor + 1; i < maior; i++){
		if(i % 5 == 2 || i % 5 == 3)
		printf("%d\n", i);
	  }
	}
	
	return 0;
}
