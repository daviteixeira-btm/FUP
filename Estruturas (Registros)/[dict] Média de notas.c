#include <stdio.h>

struct registro_aluno{
    char nome[80];
    int matricula;
    char disciplina[80];
    float nota;
};

struct registro_aluno lerAluno();
void imprimeAluno(struct registro_aluno aluno);
float mediaAluno(struct registro_aluno joao, struct registro_aluno maria);

int main(){
    struct registro_aluno joao, maria;
    joao = lerAluno();
    maria = lerAluno();
    printf("Média = %.1f", mediaAluno(joao, maria));
    return 0;
}

struct registro_aluno lerAluno(){
    struct registro_aluno aluno;
    
    scanf("%79[^\n]", aluno.nome);
    scanf("%d", &aluno.matricula);
    getchar();
    
    scanf("%79[^\n]", aluno.disciplina);
    scanf("%f", &aluno.nota);
    getchar();
    
    return aluno;
}

float mediaAluno(struct registro_aluno joao, struct registro_aluno maria){
    float media;
    media = (joao.nota + maria.nota)/2;
    return media;
}