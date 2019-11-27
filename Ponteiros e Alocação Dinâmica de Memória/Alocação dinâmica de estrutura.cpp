#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char nome[50];
   int idade;
} pessoa;

int main()
{
   // Aloca mem�ria para todos os campos da estrutura 'pessoa'.
   pessoa *p = (pessoa*) malloc( sizeof(pessoa) );
   
   // Encerra programa se n�o conseguir alocar mem�ria.
   if (p == 0) {
      printf("Erro: n�o foi poss�vel alocar mem�ria.");
      return 1;
   }
   
   // Acesso aos campos da estrutura.
   strcpy(p->nome, "Joao da Silva");
   p->idade = 20;
   printf("%s %d\n", p->nome, p->idade); 
   
   // Libera mem�ria alocada.
   free(p);
   
   return 0;
}
