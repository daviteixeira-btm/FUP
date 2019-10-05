#include <stdio.h>

int main(){
    int dia,hora,min;
    scanf("%d %d %d", &dia, &hora, &min);
    
    switch(dia){
        case 1:
        if(dia == 1){
            printf("NAO");
        }
        break;
        
        case 2:
        if(dia == 2){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else if((hora >= 14 && hora <= 17)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        case 3:
        if(dia == 3){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else if((hora >= 14 && hora <= 17)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        case 4:
        if(dia == 4){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else if((hora >= 14 && hora <= 17)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        case 5:
        if(dia == 5){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else if((hora >= 14 && hora <= 17)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        case 6:
        if(dia == 6){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else if((hora >= 14 && hora <= 17)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        case 7:
        if(dia == 7){
            if((hora >= 8 && hora <= 11)&&(min <= 59)){
                printf("SIM");
            }else{
                printf("NAO");
            }
        }
        break;
        default:
        printf("NAO");
    }
    return 0;
}