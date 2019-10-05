#include <stdio.h>
     
    int main(){
        int n, aux, contrario;
        scanf("%d", &n);
        aux = n;
        contrario = 0;
        while(aux != 0){
            contrario = contrario * 10 + aux % 10;
            aux = aux/10;
        }
        if(contrario == n){
            printf("1");
        }else{
            printf("0");
        }
        return 0;
    }
