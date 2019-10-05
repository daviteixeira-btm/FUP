#include <stdio.h>

int main(){
    int valor;
    scanf("%d", &valor);
    if(valor == 0){
        printf("nulo");
    }else if(valor < 0){
        printf("negativo");
    }else{
        printf("positivo");
    }
    return 0;
}