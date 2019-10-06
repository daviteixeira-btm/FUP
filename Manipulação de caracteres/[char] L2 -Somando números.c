#include <stdio.h>

int main(){
    char caractere;
    int soma = 0, aux = 0;
    
    scanf("%c", &caractere);
    
    while(caractere != '\n'){
        if(caractere >= '0' && caractere <= '9'){
            aux = (aux*10) + (caractere - '0');
        }else if(aux != 0){
            soma = soma + aux;
            aux = 0;
        }
        scanf("%c", &caractere);
    }
    if(aux != 0) soma += aux;
    printf("%d", soma);
}