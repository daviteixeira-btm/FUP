#include <stdio.h>

int main(){
    float aposta1, aposta2, aposta3, premio, g1, g2, g3, t;
    scanf("%f %f %f %f", &aposta1, &aposta2, &aposta3, &premio);
    
    t = aposta1 + aposta2 + aposta3;
    
    g1 =  (premio*aposta1)/t;
    g2 =  (premio*aposta2)/t;
    g3 =  (premio*aposta3)/t;
    
    printf("%f \n%f \n%f", g1, g2, g3);
    return 0;
}