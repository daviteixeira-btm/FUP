#include <stdio.h>

int main(){
    int x, n, percuso, teste;
    int deuCerto = 0;
    scanf("%d %d", &x, &n);
    
    for(percuso = 1; percuso <= n; percuso++){
        scanf("%d", &teste);
        if(teste > x){
            deuCerto++;
        }
    }
    printf("%d", deuCerto);
    return 0;
}