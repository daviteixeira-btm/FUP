#include <stdio.h>

int main(){
    
    int m[3][3], i, j;
    
    int soma1, soma2, soma3;
    
    int secundaria, principal;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            soma1 = m[0][0] + m[0][1] + m[0][2];
            soma2 = m[1][0] + m[1][1] + m[1][2];
            soma3 = m[2][0] + m[2][1] + m[2][2];
            
            principal = m[0][2] + m[1][1] + m[2][0];
            secundaria = m[0][0] + m[1][1] + m[2][2];
        }
    }
    
    if((soma1 == soma2) && (soma1 == soma3) && (soma1 == principal) && (soma1 == secundaria)){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}