#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
   char nome[50];
   int idade;
} pessoa;

int main()
{
   // Aloca memória para todos os campos da estrutura 'pessoa'.
   pessoa *p = (pessoa*) malloc( sizeof(pessoa) );
   
   // Encerra programa se não conseguir alocar memória.
   if (p == 0) {
      printf("Erro: não foi possível alocar memória.");
      return 1;
   }
   
   // Acesso aos campos da estrutura.
   strcpy(p->nome, "Joao da Silva");
   p->idade = 20;
   printf("%s %d\n", p->nome, p->idade); 
   
   // Libera memória alocada.
   free(p);
   
   return 0;
}
