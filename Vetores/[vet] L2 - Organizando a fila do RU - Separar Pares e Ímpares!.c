#include <stdio.h>

int main(){
    int numero;
    scanf("%d ", &numero);
    
    int vetor[numero];
    
    for(int i = 0; i <= numero-1; i++){
        scanf("%d ", &vetor[i]);
    }
    
    for(int i = 0; i < numero; i++){
         if(vetor[i] % 2 == 1) printf("%d ", vetor[i]);
    }
    printf("\n");
    for(int i = 0; i < numero; i++){
         if(vetor[i] % 2 == 0) printf("%d ", vetor[i]);
    }
    
    return 0;
}