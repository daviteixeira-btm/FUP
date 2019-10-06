#include <stdio.h>

int main(){
    int quantidade, count = 0;
    scanf("%d", &quantidade);
    
    int vetor[quantidade];
    
    for(int i = 0; i < quantidade; i++){
        scanf("%d", &vetor[i]);
    }
    
    for(int i = 0; i < quantidade-1; i++){
        
        if(vetor[i] <= vetor[i+1]) count++;
        else count = count;
    }
    
    if(count == quantidade -1) printf("ok");
    else printf("precisa de ajuste");
            
    return 0;
}