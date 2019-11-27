#include <stdio.h>


typedef struct{
	float nota[3];
	float media;
}aluno;

// Recebe um aluno passado por refer�ncia, e preenche o campo 'media' com a
// m�dia das 3 notas do aluno.
    
void calcula_media(aluno *a){
	float soma = 0;
	for(int i = 0; i < 3; i++)
		soma += a -> nota[i];
	a -> media = soma/3;	
}


int main(){
	aluno a;
	int i;
	for(i = 0; i < 3; i++)
		scanf("%f", &a.nota[i]);
		
	// Chame a fun��o 'calcula_media' passando o aluno 'a' por refer�ncia.
	calcula_media(&a);
	
	printf("%.1f", a.media);
	
		
}
