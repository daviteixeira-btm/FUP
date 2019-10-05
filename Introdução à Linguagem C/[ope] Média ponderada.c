#include <stdio.h>

int main(){
    float n1, n2, n3, media;
    scanf("%f %f %f", &n1, &n2, &n3);
    media = (5*n1 + 3*n2 + 2*n3)/10;
    
    printf("%.2f", media);
    return 0;
}