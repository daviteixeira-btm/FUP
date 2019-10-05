#include <stdio.h>
#include <limits.h>


int main(){
    int numeroC, i, menor = INT_MAX;
    for(i = 1; i <= 5; i++){
        scanf("%d", &numeroC);
        if(numeroC < menor){
            menor = numeroC;
        }
    }
    printf("%d", menor);
    
    return 0;
}