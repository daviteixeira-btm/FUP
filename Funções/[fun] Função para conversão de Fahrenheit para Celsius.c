#include <stdio.h>

float converte_para_celsius(float F){
    float celsius = (F - 32)*5/9;
    return celsius;
}

int main(){
    float F = 0;
    scanf("%f", &F);
    
    printf("%f", converte_para_celsius(F));
    return 0;
}