#include <stdio.h>


int main(){
    
    int N;
    scanf("%d", &N);
    
    for(int i = 0; i < N; i++){
        char  str[10];
        scanf(" %s", str);
        int soma = 0;
        for(int j = 0; str[j] != '\0' ; j++){
            switch(str[j]){
                case '1': soma += 2; break;
                case '2':
                case '3':
                case '5': soma += 5; break;
                case '4': soma += 4; break;
                case '0':
                case '6':
                case '9': soma += 6; break;
                case '7': soma += 3; break;
                case '8': soma += 7; break;
            }
        }
        printf("%d leds\n", soma);    
    }
    
    return 0;
    
}