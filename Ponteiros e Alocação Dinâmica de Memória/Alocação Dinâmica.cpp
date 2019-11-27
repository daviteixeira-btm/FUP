#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Aloca memória para 1 variável inteira.
   int *p = (int*) malloc(sizeof(int));
   
   // Encerra programa se não conseguir alocar memória.
   if (p == 0) {
      printf("Erro: não foi possível alocar memória.");
      return 1;
   }
   
   // Armazena valor na memória alocada.
   *p = 3;
   // Acessa valor armazenado na memória alocada.
   printf("%d\n", *p); 
   
   // Libera memória alocada.
   free(p);
   
   return 0;
}
