#include <stdio.h>

int main(){
    int n=0;
    char frase;
    scanf("%c", &frase);
    
    while(frase != '\n'){
        n=n + frase;
        scanf("%c",&frase);
    }
    printf("%d",n % 50);
}