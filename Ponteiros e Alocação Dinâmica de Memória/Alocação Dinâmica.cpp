#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Aloca mem�ria para 1 vari�vel inteira.
   int *p = (int*) malloc(sizeof(int));
   
   // Encerra programa se n�o conseguir alocar mem�ria.
   if (p == 0) {
      printf("Erro: n�o foi poss�vel alocar mem�ria.");
      return 1;
   }
   
   // Armazena valor na mem�ria alocada.
   *p = 3;
   // Acessa valor armazenado na mem�ria alocada.
   printf("%d\n", *p); 
   
   // Libera mem�ria alocada.
   free(p);
   
   return 0;
}
