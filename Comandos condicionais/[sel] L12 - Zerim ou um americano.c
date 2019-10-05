#include <stdio.h>
 
    int main(){
    int jog1, jog2, jog3, jog4, soma;
    scanf("%d %d %d %d", &jog1, &jog2, &jog3, &jog4);
    soma = jog1 + jog2 + jog3 + jog4;
    if(jog1 == 0 && jog2 == 0 && jog3 == 0 && jog4 == 0){
        printf("nenhum");
    }else if(soma%4 == 1){
        printf("jog1");
    }else if(soma%4 == 2){
        printf("jog2");
    }else if(soma%4 == 3){
        printf("jog3");
    }else{
        printf("jog4");
    }
    return 0;
}
