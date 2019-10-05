#include <stdio.h>
    int main(){
    int jog1, jog2, jog3;
    scanf("%d %d %d", &jog1, &jog2, &jog3);
  
    if(((jog1 == 1) && (jog2 == 0) && (jog3 == 0)) || ((jog1 == 0) && (jog2 == 1) && (jog3 == 1))){
        printf("jog1");
    }else if(((jog1 == 1) && (jog2 == 0) && (jog3 == 1)) || ((jog1 == 0) && (jog2 == 1) && (jog3 == 0))){
        printf("jog2");
    }else if(((jog1 == 0) && (jog2 == 0) && (jog3 == 1)) || ((jog1 == 1) && (jog2 == 1) && (jog3 == 0))){
        printf("jog3");
    }else{
        printf("empate");
    }
    return 0;
}
