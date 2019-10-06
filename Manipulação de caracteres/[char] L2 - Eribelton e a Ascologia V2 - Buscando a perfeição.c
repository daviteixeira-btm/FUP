#include <stdio.h>

int main(){
    
    char frase, n = 0;
    int soma = 0;
    scanf("%c", &frase);
    while (frase != '\n'){
        soma = soma + frase;
        scanf("%c", &frase);
    }
    
    for (int i = 'a' ; i < 'z'; i++){
        if ((soma + i) % 50 == 0 )
        n = i;
    }
    
    if (n != 0 ) printf("%c", n);
    else  printf("sem sorte");
}