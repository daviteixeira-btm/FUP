#include <stdio.h>

int main(){
    char caractere;
    scanf("%c", &caractere);
    
    if(caractere >= 'a'  && caractere <= 'z'){
        printf("%c", 'A' + caractere - 'a');
    }else if(caractere >='A' && caractere <='Z'){
        printf("%c", 'a' + caractere - 'A');
    }else{
        printf("%c", caractere);
    }
    
    return 0;
}