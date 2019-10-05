#include <stdio.h>

int main(){
    
    int a, b,  aux;
    scanf("%d %d", &a, &b);
    
    aux = a;
    a = b;
    
    printf("%d \n%d", a, aux);
    return 0;
}