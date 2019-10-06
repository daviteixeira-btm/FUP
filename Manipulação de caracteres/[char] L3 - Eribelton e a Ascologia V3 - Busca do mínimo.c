#include <stdio.h>

int main (){
    char frase, n = 0;
    int soma = 0 ;
    int maior_valor = 50;
    scanf("%c", &frase);
    
    while (frase != '\n'){
        soma = soma + frase;
        scanf("%c", &frase);
    }
    printf("%d\n", soma % 50);
    for (int frase = 'a' ; frase < 'z'; frase++){
        if ((soma + frase ) % 50 < maior_valor){
            n = frase;
            maior_valor=(soma +frase) % 50;
        }
    }
    printf("%c\n%d", n, maior_valor);
    
}