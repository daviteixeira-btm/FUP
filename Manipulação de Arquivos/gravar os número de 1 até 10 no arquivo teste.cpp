#include <stdio.h>

int main()
{
   FILE *f = fopen("teste.txt", "w");
   
   if (f == 0) { 
		printf("Erro ao abrir arquivo."); 
		return 1; 
	}
   
   for (int i = 1; i <= 10; i++)
      fprintf(f, "%d\n", i);
   
   fclose(f);
}
