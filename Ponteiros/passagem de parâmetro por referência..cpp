#include <stdio.h>

void f(int *x)
{
   *x = 2;
}

int main()
{
   int y = 1;
   f(&y);
   printf("%d", y);  // Imprime o valor 2.
   return 0;
}
