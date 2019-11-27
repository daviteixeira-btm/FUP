#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Aloca memória para vetor com 3 inteiros.
   int *v = (int*) malloc( 3 * sizeof(int) );   
   // Encerra programa se não conseguir alocar memória.
   if (v == 0) {
      printf("Erro: não foi possível alocar memória.");
      return 1;
   }
   
   // Acessamos elementos como em um vetor.
   v[0] = 10;
   v[1] = 20;
   v[2] = 30;
   
   // Altera o tamanho do vetor para 4.
   v = (int*) realloc(v, 4 * sizeof(int) );
   // Encerra programa se não conseguir realocar memória.
   if (v == 0) {
      printf("Erro: não foi possível realocar memória.");
      return 1;
   }
   v[3] = 40;
   
   // Acessa os valores armazenados na memória alocada.
   printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]); 
   
   // Libera memória alocada.
   free(v);
   
   return 0;
}
