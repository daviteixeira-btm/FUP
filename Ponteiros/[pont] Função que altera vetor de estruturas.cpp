#include <stdio.h>


typedef struct{
	float nota[3];
	float media;
}aluno;

// Recebe um aluno passado por refer�ncia, e preenche o campo 'media' com a
// m�dia das 3 notas do aluno.
    
void calcula_media(aluno *a){
	for(int i = 0; i < 3; i++)
		a->media+=a->nota[i]/3;	
}

// Recebe vetor de alunos ('turma') e n�mero de alunos ('n'), e chama a fun��o
// 'calcula_media' (da quest�o anterior) para cada aluno do vetor.
// Ou seja, preenche o campo 'media' de cada aluno com a m�dia das 3 notas do aluno.

void calcula_media_turma(aluno turma[], int n){
	for(int i = 0; i < n; i++)
		calcula_media(&turma[i]);
}


int main(){
	
	int n, i, j;
	scanf("%d", &n);
	
	aluno turma[n];
	
	for(j = 0; j < n; j++)
		for(int i = 0; i < 3; i++)
			scanf("%f", &turma[j].nota[i]);
	
	// Chame a fun��o 'calcula_media_turma' passando o vetor de alunos 'turma'.
	
	calcula_media_turma(turma, n);
	
	for(int j = 0; j < n; j++)
		printf("%1.f ", turma[j].media);
		
}
