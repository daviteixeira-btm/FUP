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
    
    //printf("Digite o nome do(a) aluno(a): ");
    scanf("%79[^\n]", aluno.nome);
    
    //printf("Digite a matricula desse(a) aluno(a): ");
    scanf("%d", &aluno.matricula);
    
    getchar();
    
    //printf("Digite a disciplina desse(a) aluno(a): ");
    scanf("%79[^\n]", aluno.disciplina);
    
    //printf("Digite a nota desse(a) aluno(a): ");
    scanf("%f", &aluno.nota);
    
    getchar();
    
    return aluno;
}

void imprimeAluno(struct registro_aluno aluno){
    //printf("Dados de um(a) aluno(a) ----");
    //printf("%s\n%c\n%s\n%.2f\n", aluno.nome, aluno.matricula, aluno.disciplina, aluno.nota);
    if(aluno.nota >= 7)
        printf("%s aprovado(a) em %s", aluno.nome, aluno.disciplina);
    else
        printf("%s reprovado(a) em %s", aluno.nome, aluno.disciplina);
}












