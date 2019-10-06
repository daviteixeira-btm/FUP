#include <stdio.h>

int fib (int n);

int main(){
    long int numero, x, y, aux;
    scanf("%li", &numero);
    
    x = 1;
    y = 1;
    
    for(int i = 3; i <= numero; i++){
        aux = x + y;
        x = y;
        y = aux;
        
    }
    printf("%li\n", y);
    return 0;
}