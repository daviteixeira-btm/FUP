#include <stdio.h>

char rotaciona (char letra, int n) {
  char resultado;
  resultado = (letra + n - 97) % 26;
  return resultado < 0 ? resultado + 26 + 97 : resultado + 97;
}

int main() {
  char letra;
  int numero;
  scanf("%c %d", &letra, &numero);
  
  printf("%c", rotaciona(letra, numero));
  return 0;
}