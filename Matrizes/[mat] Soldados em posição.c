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
            if(i > 0){
                if((m[i][j] <= m[i-1][j])){
                    count++;
                }
            }
        }
    }
    printf("%d", count);
    
    return 0;
}