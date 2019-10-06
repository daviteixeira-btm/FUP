#include <stdio.h>

int main(){
    
    int principal = 0, secundaria = 0;
    int matriz[5][5];
    
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
        
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j)
                principal += matriz[i][j];
            if(i + j == 4)
                secundaria += matriz[i][j];
        }
    }
    
    int subtracao;
    
    subtracao = principal - secundaria;
    
    printf("%d", subtracao);
    
    return 0;
}