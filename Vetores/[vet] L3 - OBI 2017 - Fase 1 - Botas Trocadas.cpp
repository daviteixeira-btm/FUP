#include <stdio.h>

int main(){
    int N, M, total = 0;
    char L;
    int vetorD[61], vetorE[61];
    
    scanf("%d", &N);
    
    for(int i = 30; i <= 60; i++){
        vetorD[i] = 0;
        vetorE[i] = 0;
    }
    
    for(int i = 0; i < N; i++){
        scanf("%d %c", &M, &L);
        if(L == 'E'){
            vetorE[M]++;
        }else{
            vetorD[M]++;
        }
    }
    
    for(int i = 30; i <= 60; i++){
        if(vetorD[i] < vetorE[i]){
            total += vetorD[i];
        }else{
            total += vetorE[i];
        }
    }
    printf("%d", total);
}
