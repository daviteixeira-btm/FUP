#include <stdio.h>
#include <string.h>


typedef struct registro_aluno{
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
}Aluno;

Aluno lerAluno();
float media(Aluno registro1, Aluno registro2);

int main(){
    Aluno qualquer1;
    Aluno qualquer2;
    qualquer1 = lerAluno();
    qualquer2 = lerAluno();
    printf("%.1f", media(qualquer1, qualquer2));
    return 0;
}

Aluno lerAluno(){
    Aluno registro;
    scanf("%[^\n]", registro.nome);
    scanf("%f", &registro.nota1);
    getchar();
    scanf("%f", &registro.nota2);
    getchar();
    scanf("%f", &registro.nota3);
    getchar();
    
    return registro;
}

float media(Aluno registro1, Aluno registro2){
    float media1, media2, nova_media;
    media1 = (registro1.nota1 + registro1.nota2 + registro1.nota3)/3;
    media2 = (registro2.nota1 + registro2.nota2 + registro2.nota3)/3;
    nova_media = (media1 + media2)/2;
    return nova_media;
}