#include <stdio.h>

int main(){
    int primeiraNota, segundaNota;
    scanf("%d %d", &primeiraNota, &segundaNota);
    
    int media = (primeiraNota + segundaNota)/2;
    
    if(media >= 7){
        printf("aprovado");
    }else if(media < 4){
        printf("reprovado");
    }else if(media > 4 && media < 7){
        int final;
        scanf("%d", &final);
        
        int media_final = (media + final)/2;
        if(media_final >= 5){
            printf("aprovado na final");
        }else{
            printf("reprovado na final");
        }
    }
    return 0;
}