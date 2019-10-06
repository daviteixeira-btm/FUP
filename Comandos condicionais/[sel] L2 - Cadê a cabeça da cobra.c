#include <stdio.h>

int main(){
    
    int tabuleiroN = 0, modulo;
    int posisaoX = 0, posisaoY = 0;
    char direcaoCabesa;
    int segundos = 0;
    
    scanf("%d\n%d\n%d\n%c\n%d", &tabuleiroN, &posisaoX, &posisaoY, &direcaoCabesa, &segundos);
    
    if(segundos > tabuleiroN) modulo = segundos%tabuleiroN;
    else modulo = segundos;
    
    if(direcaoCabesa == 'U'){
        
        posisaoY = posisaoY - modulo;
        if(posisaoY >= tabuleiroN) posisaoY = posisaoY + tabuleiroN;
        if(posisaoY < 0) posisaoY = posisaoY + tabuleiroN;
        
    }else if(direcaoCabesa == 'D'){
        
        posisaoY = posisaoY + modulo;
        if(posisaoY >= tabuleiroN) posisaoY = posisaoY - tabuleiroN;
        
    }else if(direcaoCabesa == 'L'){
        
        posisaoX = posisaoX - modulo;
        if(posisaoX >= tabuleiroN) posisaoX = posisaoX + tabuleiroN;
        if(posisaoX < 0) posisaoX = posisaoX + tabuleiroN;
        
    }else if(direcaoCabesa == 'R'){
        
        posisaoX = posisaoX + modulo;
        if(posisaoX >= tabuleiroN) posisaoX = posisaoX - tabuleiroN;
    }
    printf("%d %d", posisaoX, posisaoY);
    
    return 0;
}