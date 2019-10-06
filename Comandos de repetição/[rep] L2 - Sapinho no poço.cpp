  #include <stdio.h>
    
    int main(){
        int P, S, E, posisao = 0;
        scanf("%d\n%d\n%d", &P, &S, &E);
    
        for(int posisao = 0; posisao <= P; ){
            printf("%d ", posisao);
            
            if(posisao + S >= P){
                printf("saiu");
                break;
            }
            posisao = posisao + S;
            printf("%d\n", posisao);
            posisao = posisao - E;
        }
        return 0;
   }
