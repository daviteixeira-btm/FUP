#include <stdio.h>

// Implemente a fun��o 'troca'.

void troca(int *a, int *b){
	int aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

int main(){
	int x, y;
	scanf("%d %d", &x, &y);
	
	// Chame a fun��o 'troca' para trocar os valores de x e y.
	
	troca(&x, &y);
	
	printf("%d %d", x, y);
}
