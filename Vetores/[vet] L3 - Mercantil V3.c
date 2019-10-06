#include <stdio.h>

int main(){
    int numeros, jog1 = 0, jog2 = 0; 
    scanf("%d", &numeros);
    
    float produtos[numeros], chute[numeros];
    
    char escolhas[numeros];
    
    
    for(int i = 0; i < numeros; i++){
        scanf("%f", &produtos[i]);
    }
    
    for(int i = 0; i < numeros; i++){
        scanf("%f", &chute[i]);
    }
    
    for(int i = 0; i < numeros; i++){
        scanf("\n%c", &escolhas[i]);
    }
    
    for(int i = 0; i < numeros; i++){
        if((produtos[i] == chute[i]) ||
            (chute[i] < produtos[i] && escolhas[i] == 'm') ||
            (chute[i] > produtos[i] && escolhas[i] == 'M'))
            jog1++;
        else
            jog2++;
    }
    
    if(jog1 == jog2) printf("empate");
    else if(jog1 > jog2) printf("primeiro");
    else printf("segundo");
    
    return 0;
}