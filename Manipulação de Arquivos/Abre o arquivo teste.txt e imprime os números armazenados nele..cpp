#include <stdio.h>

int main()
{
   FILE *f = fopen("teste.txt", "r");
   if (f == 0) { printf("Erro ao abrir arquivo."); return 1; }
   
   int n;
   while (fscanf(f, "%d", &n) == 1)
      printf("%d\n", n);
   
   fclose(f);
}
