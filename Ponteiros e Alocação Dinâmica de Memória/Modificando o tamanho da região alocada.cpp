#include <stdio.h>
#include <stdlib.h>

int main()
{
   // Aloca mem�ria para vetor com 3 inteiros.
   int *v = (int*) malloc( 3 * sizeof(int) );   
   // Encerra programa se n�o conseguir alocar mem�ria.
   if (v == 0) {
      printf("Erro: n�o foi poss�vel alocar mem�ria.");
      return 1;
   }
   
   // Acessamos elementos como em um vetor.
   v[0] = 10;
   v[1] = 20;
   v[2] = 30;
   
   // Altera o tamanho do vetor para 4.
   v = (int*) realloc(v, 4 * sizeof(int) );
   // Encerra programa se n�o conseguir realocar mem�ria.
   if (v == 0) {
      printf("Erro: n�o foi poss�vel realocar mem�ria.");
      return 1;
   }
   v[3] = 40;
   
   // Acessa os valores armazenados na mem�ria alocada.
   printf("%d %d %d %d\n", v[0], v[1], v[2], v[3]); 
   
   // Libera mem�ria alocada.
   free(v);
   
   return 0;
}
