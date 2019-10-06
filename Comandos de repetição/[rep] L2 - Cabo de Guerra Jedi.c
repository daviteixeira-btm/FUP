#include <stdio.h>

int main(){
    int quantidade, fosa, metade = 0, equipe1 = 0, equipe2 = 0;
    scanf("%d", &quantidade);
    
    metade = quantidade/2;
    
    for(int i = 1; i <= quantidade; i++){
        scanf("%d", &fosa);
        
        if(i > metade) equipe2 = equipe2 + fosa;
        else equipe1 = equipe1 + fosa;
    }
    
    if(equipe1 > equipe2){
        printf("Jedi");
    }else if(equipe1 < equipe2){
        printf("Sith");
    }else{
        printf("Empate");
    }
    return 0;
}