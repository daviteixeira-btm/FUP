#include <stdio.h>

int main(){
    float valor;
    scanf("%f", &valor);
    
    float desconto = valor * 0.10;
    float parcela = valor/3;
    float comisaoV = (valor - desconto) * 0.05;
    float comisaoP = valor * 0.05;
    float valorT = valor - desconto;
    
    printf("%f \n%f \n%f \n%f", valorT, parcela, comisaoV, comisaoP);
    
    return 0;
}