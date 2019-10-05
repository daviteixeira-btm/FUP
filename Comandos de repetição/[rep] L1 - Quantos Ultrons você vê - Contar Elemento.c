#include <stdio.h>

int main(){
    int x, n, count = 0;
    scanf("%d %d", &x, &n);
    
    for(int i = 1; i <= n; i++){
        int codigo;
        scanf("%d", &codigo);
        if(codigo == x){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}