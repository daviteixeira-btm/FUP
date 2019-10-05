#include <stdio.h>

int main(){
    
    
    int angulo, novo1, novo2;
    scanf("%d", &angulo);
    
    novo1 = angulo % 360;
    
    if(novo1 < 0){
        novo2 = novo1 + 360;
        printf("%d", novo2);
    }else if(novo1 > 0){
        printf("%d", novo1);
    }else if((novo1 == 0) || (novo1 == 360) || (novo1 == 720)){
        printf("0");
    }
    return 0;
}