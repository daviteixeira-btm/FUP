#include <stdio.h>

int main(){
    
    int numero, parkour = 0;
    scanf("%d", &numero);
    
    int vetor[numero];
    
    for(int i = 0; i < numero; i++){ //Ler o vetor
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i <= numero-2; i++){ // Percorre o vetor
        if((vetor[i] - vetor[i+1]) > 1 || vetor[i+1] - vetor[i] > 1){
            parkour++;
        }
    }
    
    printf("%d", parkour);
    return 0;
}