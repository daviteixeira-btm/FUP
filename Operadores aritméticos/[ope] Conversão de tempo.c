#include <stdio.h>

int main(){
    int n1;
    scanf("%d", &n1);
    
    int segundos = n1 % 60;
    int minutos = ((n1 - segundos)/60)%60;
    int horas = n1/3600;
    
    printf("%d %d %d", horas, minutos, segundos);
    
    return 0;
}