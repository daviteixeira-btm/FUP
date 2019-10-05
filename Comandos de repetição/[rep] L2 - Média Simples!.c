#include <stdio.h>

int main(){
    int x;
    float n, soma = 0;
    scanf("%d", &x);
    
    for(int i = 1; i <= x; i++){
        scanf("%f", &n);
        soma = soma + n;
    }
    printf("%.1f", soma/x);
    return 0;
}