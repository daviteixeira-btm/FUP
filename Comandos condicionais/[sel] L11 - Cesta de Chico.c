#include <stdio.h>
     
    int main(){
    int cap, banana, goiaba, manga, soma;
    scanf("%d %d %d %d", &cap, &banana, &goiaba, &manga);
    soma = banana + goiaba + manga;
    
    if(soma%cap == 0){
        printf("%d", soma/cap);
    }else{
        printf("%d", soma/cap + 1);
    }
        
        
    return 0;
}
