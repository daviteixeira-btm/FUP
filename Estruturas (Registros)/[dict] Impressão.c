#include <stdio.h>

struct registro_aluno{
    char nome[80];
    int matricula;
    char disciplina[80];
    float nota;
};

struct registro_aluno lerAluno();
void imprimeAluno(struct registro_aluno aluno);

int main(){
    struct registro_aluno joao;
    joao = lerAluno();
    imprimeAluno(joao);
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

void imprimeAluno(struct registro_aluno aluno){
    printf("Nome = %s\nMatrícula = %d\nDisciplina = %s\nNota = %.1f\n", aluno.nome, aluno.matricula, aluno.disciplina, aluno.nota);
}






