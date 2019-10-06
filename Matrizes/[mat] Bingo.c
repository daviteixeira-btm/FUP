#include <stdio.h>

int procurar(int procurando, int i, int j, int matriz[i][j]);

int main(){
    int v[6];
    int matriz[4][4];
    int count = 0;
    
    for(int i = 0; i < 6; i++){
        scanf("%d", &v[i]);
    }
    
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 6; i++)
    count += procurar(v[i], 4, 4, matriz);
    
    printf("%d\n", count);
    return 0;
}

int procurar(int procurando, int i, int j, int matriz[i][j]){
    for(int m = 0; m < i; m++){
        for(int n = 0; n < j; n++){
            if(matriz[m][n] == procurando)
                return 1;
        }
    }
    return 0;
}