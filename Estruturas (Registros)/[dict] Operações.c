#include <stdio.h>
#include <string.h>

typedef struct expressao{
    float numero1;
    float numero2;
}Expressao;

Expressao lerExpressao();
void calcular(Expressao registro);

int main(){
    Expressao resultados;
    resultados = lerExpressao();
    calcular(resultados);
    return 0;
}

Expressao lerExpressao(){
    Expressao registro;
    scanf("%f", &registro.numero1);
    getchar();
    scanf("%f", &registro.numero2);
    getchar();
    
    return registro;
}

void calcular(Expressao registro){
    printf("%.0f %.0f %.1f %1.f", registro.numero1 + registro.numero2,
                                  registro.numero1 - registro.numero2, 
                                  registro.numero1 / registro.numero2, 
                                  registro.numero1 * registro.numero2);
}