#include <stdio.h>

int main(){
    
    int numero, count = 0;
    scanf("%d", &numero);
    
    int vetor[numero];
    
    for(int i = 0; i < numero; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i <= numero; i++){
        for(int j = 0; j < i; j++){
            if(vetor[i] == vetor[j]){
                count++;
                break;
            }
        }
    }
    printf("%d", numero - count);
    
    return 0;
}