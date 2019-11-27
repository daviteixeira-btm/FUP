#include <stdio.h>

typedef struct {
   int x;
   float y;
} tupla;

void f(tupla *p)
{
   p->y = 3;  // ALTERE APENAS AQUI.
}

int main()
{
   tupla t = {1, 2.0};
   f(&t);
   printf("%d %.1f", t.x, t.y);  // Imprime "1 3.0"
   return 0;
}
