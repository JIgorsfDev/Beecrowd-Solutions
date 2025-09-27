#include <stdio.h>

int main(){
    double a, b, perc;
    
    scanf("%lf %lf", &a, &b);
    
    perc = (b - a) / a;
    perc *= 100;
    
    printf("%.2lf%%\n", perc);
    
    
    return 0;
}
