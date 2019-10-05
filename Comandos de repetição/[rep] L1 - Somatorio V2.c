#include <stdio.h>

int main(){
    int n1, n2, soma = 0;
    scanf("%d %d", &n1, &n2);
    
    if(n1 > n2){
        printf("invalido");
    }else{
        while(n1 <= n2){
            if(n1%6 == 0){
                soma = soma + n1;
            }
            n1++;
        }
        printf("%d", soma);
    }
    return 0;
}