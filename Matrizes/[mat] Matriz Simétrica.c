#include <stdio.h>

int main(){
    
    int m[3][3], i, j, count = 0;
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            scanf("%d", &m[i][j]);
        }
    }
    
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(m[i][j] == m[j][i])
                count++;
        }
    }
    
    if(count == 9){
        printf("sim");
    }else{
        printf("nao");
    }
    return 0;
}