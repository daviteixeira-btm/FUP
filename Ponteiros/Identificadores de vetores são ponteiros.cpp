#include <stdio.h>

void f(int v[], int n)
{
   int i;
   for (i = 0; i < n; i++)
      v[i] += 1;
}

int main()
{
   int v[3] = {1,2,3};

   f(v,3);

   int i;
   for (i = 0; i < 3; i++)
      printf("%d ", v[i]); // Imprime "2 3 4"
   return 0;
}
