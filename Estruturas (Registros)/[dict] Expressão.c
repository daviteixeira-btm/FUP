#include <stdio.h>
#include <string.h>

typedef struct expressao{
    int numero1;
    int numero2;
    char operador;
}Expressao;

Expressao lerExpressao();
void calcular(Expressao registro);


int main(){
    Expressao valor;
    valor = lerExpressao();
    calcular(valor);
    return 0;
}

Expressao lerExpressao(){
    Expressao registro;
    scanf("%d", &registro.numero1);
    getchar();
    scanf("%d", &registro.numero2);
    getchar();
    scanf("%c", &registro.operador);
    
    return registro;
}

void calcular(Expressao registro){
    switch(registro.operador){
        case '+': printf("%d", registro.numero1 + registro.numero2); break;
        case '-': printf("%d", registro.numero1 - registro.numero2); break;
        case '/': printf("%d", registro.numero1 / registro.numero2); break;
        case '*': printf("%d", registro.numero1 * registro.numero2); break;
    }
}