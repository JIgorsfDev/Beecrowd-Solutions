#include <stdio.h>

int main(){
  unsigned long long int casos, f;

  scanf("%llu", &casos);

  while(casos > 0){
   scanf("%llu", &f);
    
    if(f == 0)
      printf("Fib(0) = 0\n");

      else if(f == 1)
        printf("Fib(1) = 1\n");

  else{
    unsigned long long int fv[f];
    fv[0] = 0;
    fv[1] = 1;

   for(int i = 2; i <= f; i++){
     fv[i] = fv[i - 1] + fv[i - 2];
   }

    printf("Fib(%llu) = %llu\n", f, fv[f]);
  }
    casos--;
  }

  return 0;
}
