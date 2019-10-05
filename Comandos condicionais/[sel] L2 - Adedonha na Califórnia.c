#include <stdio.h>

int main(){
    int soma;
    scanf("%d", &soma);
    
    if(soma == 0){
        printf("joguem de novo");
    }else if(soma > 0){
        printf("%c", 'a' + (soma - 1)%26);
    }
    
    return 0;
}