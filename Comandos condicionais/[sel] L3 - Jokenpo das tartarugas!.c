#include <stdio.h>

int main(){
    
    char jog1, jog2;
    scanf("%c %c", &jog1, &jog2);
    
    if(jog1 == 'R' && jog2 == 'S'){
        printf("jog1");
    }else if(jog1 == 'R' && jog2 == 'P'){
        printf("jog2");
    }else if(jog1 == 'S' && jog2 == 'P'){
        printf("jog1");
    }else if(jog1 == 'S' && jog2 == 'R'){
        printf("jog2");
    }else if(jog1 == 'P' && jog2 == 'R'){
        printf("jog1");
    }else if(jog1 == 'P' && jog2 == 'S'){
        printf("jog2");
    }else{
        printf("empate");
    }
    return 0;
}