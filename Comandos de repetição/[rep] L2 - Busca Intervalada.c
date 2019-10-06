#include <stdio.h>

int main(){
    int numero, valorInfe, valorSup, numeros, cont = 0;
    scanf("%d %d %d", &numero, &valorInfe, &valorSup);
    
    for(int i = 1; i <= numero; i++){
        scanf("%d", &numeros);
        
        if((numeros >= valorInfe) && (numeros <= valorSup)){
            cont++;
        }
    }
    printf("%d", cont);
    return 0;
}