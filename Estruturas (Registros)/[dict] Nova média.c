#include <stdio.h>
#include <string.h>

typedef struct registroAluno{
    char nome[50];
    float nota_01;
    float nota_02;
    float nota_03;
}Aluno;

Aluno lerAluno();
void nova_media(Aluno registro);

int main(){
    Aluno qualquer;
    qualquer = lerAluno();
    nova_media(qualquer);
    return 0;
}

Aluno lerAluno(){
    Aluno registro;
    scanf("%[^\n]", registro.nome);
    getchar();
    scanf("%f", &registro.nota_01);
    getchar();
    scanf("%f", &registro.nota_02);
    getchar();
    scanf("%f", &registro.nota_03);
    
    return registro;
}

void nova_media(Aluno registro){
    float media = (registro.nota_01 + registro.nota_02 + registro.nota_03)/3;
    printf("%.1f", media);
}