#include <stdio.h>

int main(){
    
    int min = 0, max = 0;
    
    int vetor[5];
    
    for(int i = 0; i <= 4; i++){
        scanf("%d", &vetor[i]);
        if(vetor[i] < vetor[min]) min = i;
        if(vetor[i] > vetor[max]) max = i;
    }
    printf("%d", vetor[min] + vetor[max]);
    
    return 0;
}