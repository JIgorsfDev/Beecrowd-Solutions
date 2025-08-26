#include <stdio.h>

int main(){
 int v[15], par[5], contpar = 0, contimpar = 0, impar[5], val;

  for(int i = 0; i < 15; i++){
    scanf("%d", &val);

    if(val % 2 == 0 && contpar < 5){
      par[contpar] = val;
      contpar++;
    }
    else if(contpar >= 5){
      for(int j = 0; j < 5; j++){
        printf("par[%d] = %d\n", j, par[j]);
      }
      
        contpar = 0;
        par[contpar] = val;
        contpar++;
    }

    else if(val % 2 != 0 && contimpar < 5){
      impar[contimpar] = val;
      
      contimpar++;
    }
    else if(contimpar >= 5){
      for(int j = 0; j < 5; j++){
        printf("impar[%d] = %d\n", j, impar[j]);
      }
      
        contimpar = 0;
        impar[contimpar] = val;
        contimpar++;
      
    }
  }

  for(int k = 0; k < contimpar; k++)
    printf("impar[%d] = %d\n", k, impar[k]);
  
  for(int k = 0; k < contpar; k++)
    printf("par[%d] = %d\n", k, par[k]);

  return 0;
}
