#include <stdio.h>

int main(){
    float jog1, valor;
    char escolha;
    scanf("%f\n%c\n%f", &jog1, &escolha, &valor);
    
    if(jog1 < valor && escolha == 'm'){
        printf("primeiro");
    }else if(jog1 > valor && escolha == 'm'){
        printf("segundo");
    }else if(jog1 < valor && escolha == 'M'){
        printf("segundo");
    }else if(jog1 > valor && escolha == 'M'){
        printf("primeiro");
    }
    return 0;
}