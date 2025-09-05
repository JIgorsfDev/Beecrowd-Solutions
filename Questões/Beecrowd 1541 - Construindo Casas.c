#include <stdio.h>
#include <math.h>
int main(){
  int l1, l2, area, percentual, aux = 0;

  while(aux != 1){
  scanf("%d %d %d", &l1, &l2, &percentual);

    if(l1 == 0 || l2 == 0 || percentual == 0)
      aux++;

    else{

      area = l1 * l2;
      area = area * 100/percentual;
      area = sqrt(area);
    
      printf("%d\n", area);
    }
  }
  
    return 0;
}
