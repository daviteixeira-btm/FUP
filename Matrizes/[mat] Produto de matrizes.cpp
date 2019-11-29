#include <stdio.h>

int main(){
    
    int n1, n2, n3, x;
    
    scanf("%d %d %d", &n1, &n2, &n3);
    
    int A[n1][n2], B[n2][n3], P[n1][n3], aux = 0;
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            scanf("%d", &A[i][j]);
        }
    }
    
    for(int i = 0; i < n2; i++){
        for(int j = 0; j < n3; j++){
            scanf("%d", &B[i][j]);
        }
    }
    
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n3; j++){
            aux = 0;
            for(x = 0; x < n2; x++){
                aux += A[i][x] * B[x][j];
            }
            P[i][j] = aux;
            printf("%d ", P[i][j]);
        }
        printf("\n");
    }
    return 0;
}
