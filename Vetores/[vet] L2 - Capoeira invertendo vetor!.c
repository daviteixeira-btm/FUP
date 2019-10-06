
#include <stdio.h>

int main(){
    int numero, i, aux;
    scanf("%d", &numero);
    
    int vetor[numero];
    
    for(i = 0; i <= numero -1; i++){
        scanf("%d ", &vetor[i]);
    }
    
    for(i = 0; i < (numero/2); i++){
        aux = vetor[i];
        vetor[i] = vetor[numero-i-1];
        vetor[numero-i-1] = aux;
    }
    
    for(i = 0; i < numero; i++){
        printf("%d ", vetor[i]);
    }
    
    return 0;
}