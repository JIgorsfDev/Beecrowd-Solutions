#include <stdio.h>

int main(){
  int num_lesmas, maior_nivel, maior_vel = 0;

  while(scanf("%d", &num_lesmas) != EOF){
    int vel[num_lesmas];
     maior_nivel = 0;
    
    for(int i = 0; i < num_lesmas; i++){
      scanf("%d", &vel[i]);

       if(i > 0 && vel[i] > maior_vel){
         if(vel[i] < 10){
           maior_nivel = 1;
           maior_vel = vel[i];
          }
         else if(vel[i] >= 10 && vel[i] < 20){
           maior_nivel = 2;
           maior_vel = vel[i];
          }
         else{
           maior_nivel = 3;
           maior_vel = vel[i];
           }
        }

       else if(i == 0){
         if(vel[i] < 10){
           maior_nivel = 1;
           maior_vel = vel[i];
         }
         else if(vel[i] >= 10 && vel[i] < 20){
           maior_nivel = 2;
           maior_vel = vel[i];
         }
         else{
           maior_nivel = 3;
           maior_vel = vel[i];
         }
       }
      }

      printf("%d\n", maior_nivel);

     maior_nivel = 0;
     maior_vel = 0;

     for(int i = 0; i < num_lesmas; i++)
       vel[i] = 0;
  
}
  return 0;
}
