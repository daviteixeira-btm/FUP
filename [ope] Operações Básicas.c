#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int soma = n1 + n2;
    int sub = n1 - n2;
    int mult = n1 * n2;
    float divi = (float) n1/n2;
    int res = n1%n2;
    
    printf("%d\n%d\n%d\n%.2f\n%d", soma, sub, mult, divi, res);
    return 0;
}