#include <stdio.h>
#include <string.h>

typedef struct registro_aluno{
    char nome[40];
    float nota1, nota2, nota3;
}Aluno;

Aluno lerAluno();
void verificar(Aluno registro1, Aluno registro2, Aluno registro3);

int main(){
    Aluno aluno_qualquer1;
    Aluno aluno_qualquer2;
    Aluno aluno_qualquer3;
    
    aluno_qualquer1 = lerAluno();
    aluno_qualquer2 = lerAluno();
    aluno_qualquer3 = lerAluno();
    
    verificar(aluno_qualquer1, aluno_qualquer2, aluno_qualquer3);
    
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

void verificar(Aluno registro1, Aluno registro2, Aluno registro3){
    float media_01 = (registro1.nota1 + registro1.nota2 + registro1.nota3)/3;
    float media_02 = (registro2.nota1 + registro2.nota2 + registro2.nota3)/3;
    float media_03 = (registro3.nota1 + registro3.nota2 + registro3.nota3)/3;
    
    if(media_01 >= 7)
        printf("%s %.2f\n", registro1.nome, media_01);
    if(media_02 >= 7)
        printf("%s %.2f\n", registro2.nome, media_02);
    if(media_03 >= 7)
        printf("%s %.2f\n", registro3.nome, media_03);
}
