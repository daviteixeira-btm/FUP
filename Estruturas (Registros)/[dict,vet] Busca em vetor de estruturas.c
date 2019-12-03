#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    float nota;
} Aluno;

void lerAluno(Aluno vet[], int n);
void encontrar_aluno(Aluno vet[], int n, int m);


int main(){
    int n, m;
    scanf("%d", &n);
    Aluno vet[n];
    
    lerAluno(vet, n);
    
    scanf("%d", &m);
    
    encontrar_aluno(vet, n , m);
    
    return 0;
}

void lerAluno(Aluno vet[], int n){
  for(int i = 0; i < n; i++){
        scanf("%d", &vet[i].matricula);
        getchar();
        scanf("%[^\n]", vet[i].nome);
        scanf("%f", &vet[i].nota);
        scanf("%*[^\n]"); scanf("%*c");
    }  
}

void encontrar_aluno(Aluno vet[], int n, int m){
    int achou = 0;
    
    for(int i = 0; i < n; i++){
        if(vet[i].matricula == m){
            achou = 1;
            printf("%s\n", vet[i].nome);
            printf("%.1f\n", vet[i].nota);
            break;
        }
    }
    
    if(!achou) printf("NAO ENCONTRADA");
}