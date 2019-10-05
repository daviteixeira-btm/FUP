#include <stdio.h>
#include <math.h>

int main(){
    
    float p1x, p1y, p2x, p2y;
    scanf("%f %f %f %f", &p1x, &p1y, &p2x, &p2y);
    
    float dp1 = pow(p2x - p1x, 2);
    float dp2 = pow(p2y - p1y, 2);
    
    float distancia = sqrt(dp1 + dp2);
    
    printf("%.2f", distancia);
    return 0;
}