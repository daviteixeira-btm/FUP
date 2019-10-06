#include <stdio.h>

int main(){
    
    int soldados;
    double media = 0;
    
    scanf("%d", &soldados);
    
    double altura[soldados];
    
    for(int i = 0; i < soldados; i++){
        scanf("%lf", &altura[i]);
    }
    
    for(int i = 0; i < soldados; i++){
        media = media + altura[i];
    }
    
    media = media/soldados;
    
    printf("%.2f\n", media);
    
    for(int i = 0; i < soldados; i++){
        if(altura[i] > media){
            printf("G ");
        }else if(altura[i] == media){
            printf("M ");
        }else{
            printf("P ");
        }
    }
    
    return 0;
}