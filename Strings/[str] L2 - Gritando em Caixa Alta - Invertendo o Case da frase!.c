#include <stdio.h>
#include <string.h>

void transforma(char str[]);

int main(){
    
    char frase[100];
    scanf("%[^\n]", frase);
    
    transforma(frase);
    
    for (int i =0; frase[i] != '\0'; i++){
        printf("%s", frase);
        break;
    }
}

void transforma(char str[]){
    for (int i =0; str[i] != '\0'; i++){
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] ='A'+ (str[i]- 'a');     
        
        else if (str[i] >='A' && str[i] <= 'Z' )  
            str[i] ='a'+ (str[i] - 'A');     
    }
}