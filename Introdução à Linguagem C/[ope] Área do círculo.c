#include <stdio.h>

int main(){
    float raio, area;
    scanf("%f", &raio);
    
    area = 3.14 * raio * raio;
    
    printf("%.2f", area);
    return 0;
}