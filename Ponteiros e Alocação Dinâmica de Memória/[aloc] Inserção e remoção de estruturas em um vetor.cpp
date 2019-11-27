#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	int matricula;
	char nome[50];
	float media;
}aluno;

aluno le_aluno(){
	aluno a;
	scanf("%d\n%[^\n]\n%f\n", &a.matricula, a.nome, &a.media);
	return a;
}

/* 
    Recebe vetor de alunos e novo aluno, e insere o novo aluno no final do vetor.
    - v: vetor de alunos
    - n: tamanho do vetor de alunos (passado por refer�ncia)
    - novo: novo aluno a ser inserido no final do vetor.
    
    Pseudoc�digo:
       altere o tamanho do vetor v para conter *n+1 elementos, pondo endere�o em v
       se n�o conseguir alocar (v == 0) imprima msg de erro e retorne 0
       coloque o aluno 'novo' na �ltima posi��o do vetor (posi��o *n)
       aumente em 1 o tamanho do vetor (incrementar *n)
       retorne v
*/

aluno* insere_aluno(aluno *v, int *n, aluno novo){
	v = (aluno *) realloc(v, (*n + 1) * (sizeof(aluno)));
	
	if(v == 0){
		printf("erro");
		return 0;
	}
	
	v[*n] = novo;
	(*n)++;
	return v;
}

/*
    Recebe vetor de alunos, e retira do vetor o primeiro aluno com matr�cula igual �
    matr�cula passada como par�metro.
    - v: vetor de alunos
    - n: tamanho do vetor de alunos (passado por refer�ncia)
    - matricula: matr�cula do aluno a ser removido.
    
    Pseudoc�digo:
       para i de 0 at� o tamanho do vetor menos 1
          se a matr�cula do i-�simo elemento do vetor � igual � 'matr�cula' passada como par�metro
             copie �ltimo elemento do vetor para a posi��o i
             realoque vetor para conter um elemento a menos, pondo endere�o em v
             se n�o for poss�vel realocar, imprima mensagem de erro e retorne
             reduza em 1 o tamanho do vetor (decrementar *n)
             break
       retorne o endere�o de mem�ria do vetor realocado
*/

aluno* remove_aluno(aluno *v, int *n, int matricula){
	for(int i = 0; i < *n; i++){
		if(v[i].matricula == matricula){
			v[i] = v[(*n-1)];
			
			v = (aluno *) realloc(v, ((*n)-1) * (sizeof(aluno)));
			
			if(v == 0){
				printf("erro");
				return 0;
			}
			
			(*n)--;
			break;
		}
	}
	return v;
}

int main(){
	int num_oper = 0, i, n = 0;
	scanf("%d\n", &num_oper);
	
	aluno *v = 0;
	
	for(i = 0; i < num_oper; i++){
		char oper;
		scanf("%c\n", &oper);
		
		if(oper == 'i'){
			aluno a = le_aluno();
			v = insere_aluno(v, &n, a);
		}else{
			int mat;
			scanf("%d\n", &mat);
			v = remove_aluno(v, &n, mat);
		}
	}
	
	for(i = 0; i < n; i++)
		printf("%d\n%s\n%.1f\n", v[i].matricula, v[i].nome, v[i].media);
	free(v);
	
	return 0;
}
