#include <stdio.h>

int main(){
    int N, nota, max = -1, min = 11, soma = 0;
    scanf("%d", &N);
    
    for(int i = 1; i <= N; i++){
        scanf("%d", &nota);
        soma = soma + nota;
        
        if(nota < min) min = nota;
        if(nota > max) max = nota;
    }
    
    soma = soma - (min + max);
    printf("%d", soma);
}