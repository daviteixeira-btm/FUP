#include <stdio.h>

int main()
{
    int a = 1;
    int *p = &a;
    
    printf("Endereço de memória de a: %p\n", p);    
    printf("Valor armazenado no local apontado: %d\n", *p);
    
    *p = 5;
    
    printf("Valor armazenado no local apontado: %d\n", *p);
    printf("Valor de a: %d\n", a);
    return 0;
}
