#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char nome[50];
   int idade;
} pessoa;

int main()
{
   // Aloca mem�ria vetor com 2 elementos da estrutura 'pessoa'.
   pessoa *v = (pessoa*) malloc( 2 * sizeof(pessoa) );
   
   // Encerra programa se n�o conseguir alocar mem�ria.
   if (v == 0) {
      printf("Erro: n�o foi poss�vel alocar mem�ria.");
      return 1;
   }
   
   // Acesso aos campos da estrutura.
   strcpy(v[0].nome, "Joao da Silva");
   v[0].idade = 20;
   strcpy(v[1].nome, "Maria dos Santos");
   v[1].idade = 25;
   printf("%s %d\n%s %d\n", v[0].nome, v[0].idade, v[1].nome, v[1].idade); 
   
   // Libera mem�ria alocada.
   free(v);
   
   return 0;
}
