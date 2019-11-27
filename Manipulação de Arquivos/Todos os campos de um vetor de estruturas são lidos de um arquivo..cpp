#include <stdio.h>

typedef struct
{
   int matricula;
   char nome[100];
   double nota;
   int faltas;
} aluno;

int main()
{
   FILE *f = fopen("alunos.txt", "r");
   if (f == 0) { printf("Erro ao abrir arquivo."); return 1; }

   aluno turma[30], a;
   
   int tam = 0;
   while (fscanf(f, "%d\n%[^\n]\n%lf\n%d\n", &a.matricula, a.nome, &a.nota, &a.faltas) == 4) {
      turma[tam] = a;
      tam++;
   }
   
   fclose(f);
   
   for (int i = 0; i < tam; i++)
       printf("%d, %s, %.1f, %d\n", turma[i].matricula, turma[i].nome, turma[i].nota, turma[i].faltas);
}
