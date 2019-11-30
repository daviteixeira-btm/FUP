#include <stdio.h>

struct registro_aluno{
    char nome[80];
    int matricula;
    char disciplina[80];
    float nota;
};

struct registro_aluno lerAluno();
void imprimeAluno(struct registro_aluno aluno);
float maiorNota(struct registro_aluno joao, struct registro_aluno maria);

int main(){
    struct registro_aluno joao, maria;
    joao = lerAluno();
    maria = lerAluno();
    maiorNota(joao, maria);
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

float maiorNota(struct registro_aluno joao, struct registro_aluno maria){
    float maior;
        if(joao.nota > maria.nota){
            maior = joao.nota;
            printf("%s , %.1f", joao.nome, joao.nota);
        }else if(maria.nota > joao.nota){
            maior = maria.nota;
            printf("%s , %.1f", maria.nome, maria.nota);
        }else if(joao.nota == maria.nota){
            printf("%s e %s , %.1f", joao.nome, maria.nome, joao.nota);
        }
    return maior;
}

