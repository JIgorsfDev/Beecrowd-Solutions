#include <stdio.h>

int main(){
	int v1, v2, maior = 0, menor = 0, i = 0, somatorio = 0;
	
	scanf("%d %d", &v1, &v2);
	
	  if(v1 > v2){
		maior = v1;
		menor = v2;
	   }
	
	  else{
	 	maior = v2;
		menor = v1;
	   }
	
      for(i = menor; i <= maior; i++){
		if(i % 13 != 0)
		somatorio += i;
	  }
	  
	  printf("%d\n", somatorio);
	
	return 0;
}
