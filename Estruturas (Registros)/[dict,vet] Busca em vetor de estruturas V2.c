#include <stdio.h>

typedef struct{
    int matricula;
    char nome[50];
    float media;
}Aluno;

int main(){
    int n; 
    float maior = 0;
    int marcador = 0;
    scanf("%d", &n);
    
    Aluno vet[n];
    
    for(int i = 0; i < n; i++){
        scanf("%d\n", &vet[i].matricula);
        scanf("%[^\n]\n", vet[i].nome);
        scanf("%f\n", &vet[i].media);
    }
    
    for(int i = 0; i < n; i++){
        if(vet[i].media > maior){
            maior = vet[i].media;
            marcador = i;
        }
    }
    printf("%d\n%s\n%.1f", vet[marcador].matricula, vet[marcador].nome, vet[marcador].media);
    
    return 0;
}