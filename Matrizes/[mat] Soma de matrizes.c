#include <stdio.h>

int main(){
    int l, c;
    scanf("%d%d", &l, &c);
    
    int A[l][c], B[l][c];
    
    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &A[i][j]);
            
    for(int i = 0; i < l; i++)
        for(int j = 0; j < c; j++)
            scanf("%d", &B[i][j]);
            
    for(int i = 0; i < l; i++){
        for(int j = 0; j < c; j++){
            printf("%d ", A[i][j] + B[i][j]);
        }
        printf("\n");
    }
    return 0;
}