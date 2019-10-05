#include <stdio.h>

int main(){
    int n1, n2;
    char simbolo;
    scanf("%d %d %c", &n1, &n2, &simbolo);
    
    if(simbolo == '+'){
        int soma = n1 + n2;
        printf("%d", soma);
    }else if(simbolo == '-'){
        int sub = n1 - n2;
        printf("%d", sub);
    }else if(simbolo == '*'){
        int mult = n1 * n2;
        printf("%d", mult);
    }else if(simbolo == '/'){
        if((n1 != 0) && (n2 != 0)){
           int divi = (n1 / n2);
           printf("%d\n", divi); 
        }else{
           printf("invalida");
        }
    }else{
        printf("invalida");
    }
    return 0;
}