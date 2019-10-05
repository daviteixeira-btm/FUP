#include <stdio.h>
#include <math.h>

int main(){
    char entrada;
    float nota;
    scanf("%c %f", &entrada ,&nota);
    
    if(entrada == 'c'){
        printf("%0.f", ceil(nota));
    }else if(entrada == 'f'){
        printf("%0.f", floor(nota));
    }else if(entrada == 'r'){
        printf("%0.f", round(nota));
    }
    return 0;
}