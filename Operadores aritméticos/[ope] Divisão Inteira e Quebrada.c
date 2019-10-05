#include <stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    
    int divi = n1/n2;
    int res = n1%n2;
    float quebrada = (float) n1/n2;
    
    printf("%d\n%d\n%.2f", divi, res, quebrada);
    return 0;
}