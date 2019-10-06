#include <stdio.h>

int main(){
    
    char n;
    scanf("%c", &n);
    
    while(n != '\n'){
        if(n == '#' || n ==';')
            printf("\n");
        else
            printf("%c", n);
        scanf("%c", &n);   
    }
    return 0;
}