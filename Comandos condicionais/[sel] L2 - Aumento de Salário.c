#include <stdio.h>

int main(){
    float salario, novo, aumento;
    scanf("%f", &salario);
    
    if(salario <= 1000){
        aumento = salario * 0.20;
        novo = salario + aumento;
        printf("%.2f", novo);
    }else if(salario > 1000 && salario <= 1500){
        aumento = salario * 0.15;
        novo = salario + aumento;
        printf("%.2f", novo);
    }else if(salario > 1500 && salario <= 2000){
        aumento = salario * 0.10;
        novo = salario + aumento;
        printf("%.2f", novo);
    }else{
        aumento = salario * 0.05;
        novo = salario + aumento;
        printf("%.2f", novo);
    }
    return 0;
}