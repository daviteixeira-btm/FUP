#include <stdio.h>

int main(){
    int numero, m, c, d, u;
    scanf("%d", &numero);
    
    m = numero/1000;
    c = (numero - (m * 1000))/100;
    d = (numero - (m * 1000 + c * 100))/10;
    u = numero - (m * 1000 + c * 100 + d * 10);
    
    printf("%d \n%d \n%d \n%d", m, c, d, u);
    return 0;
}