#include <stdio.h>
int main(){
  int hora,minuto,distancia,x,y;
  char sentido;
     scanf("%d %d %c %d ", &hora, &minuto, &sentido, &distancia);
       
    x= (distancia/6)%12;
    y= (distancia%6)*10;
     
        if(sentido =='H'){
            if ((hora+x)%12 + (minuto+y)/60 < 10){
                printf("0%d ",(hora+x)%12 + (minuto+y)/60);
            }else{
                printf("%d ",(hora+x)%12 + (minuto+y)/60);
            }
            if ((minuto+y)%60< 10){
            printf("0%d", ((minuto+y)%60));    
            }else{
                printf("%d", ((minuto+y)%60));
            }
            
        }else if (sentido == 'A'){
            int difh, difm;
           if (hora>=x){
               difh=hora-x;
            
           }else{
               difh=12+hora-x;
           }
           if (minuto>=y){
               difm=minuto-y;
               
           }else{
               if(difh<1){
                   difh=12-1;
               }
               else{
                   difh--;
               }
               
               difm=60+minuto-y;
           }
          if ((difh)%12 + (difm)/60 < 10){
                printf("0%d ",(difh)%12) ;
            }else{
                printf("%d ",(difh)%12) ;
            }
            if ((difm)%60< 10){
            printf("0%d", ((difm)%60));    
            }else{
                printf("%d", ((difm)%60));
            }
        }
       return 0;
}
