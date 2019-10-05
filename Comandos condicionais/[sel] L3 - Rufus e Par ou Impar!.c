#include <stdio.h>

int main(){
    int jogada1, jogada2, aux;
    char totalidade;
    scanf("%c\n%d\n%d", &totalidade, &jogada1, &jogada2);
    
    aux = (jogada1 + jogada2)%2;
    
    if((aux == 1 && totalidade == 'i')||(aux == 0 && totalidade == 'p')){
        printf("Venceu");
    }else{
        printf("Perdeu");
    }
    return 0;
}