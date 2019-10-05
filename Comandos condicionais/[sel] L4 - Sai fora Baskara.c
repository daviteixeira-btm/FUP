#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    
    float delta = (pow(b, 2) -4 * a * c);
    
    float x1 = (-b + sqrt(delta))/(2*a);
    float x2 = (-b - sqrt(delta))/(2*a);
    
    if(delta < 0){
        printf("nao ha raiz real");
    }else if(delta == 0){
        printf("%.2f", x1);
    }else{
        printf("%.2f %.2f", x1, x2);
    }
    
    return 0;
}
