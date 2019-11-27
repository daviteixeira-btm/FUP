#include <stdio.h>

// Recebe tempo em 'segundos', converte para horas, minutos e segundos, e
// retorna o resultado atrav�s dos par�metros 'hor', 'min' e 'seg'.

void converte_tempo(int segundos, int *hor, int *min, int *seg){
	*hor = segundos/3600;
	*min = (segundos - (3600 * *hor))/60;
	*seg = segundos % 60;
}

int main(){
	int tempo, h, m, s;
	scanf("%d", &tempo);
	
	// Chame a fun��o 'converte_tempo' para converter o valor de 'tempo' em horas
	// minutos e segundos, gravando o resultado nas variaveis 'h', 'm' e 's'.
	
	converte_tempo(tempo, &h, &m, &s);
	
	printf("%d:%d:%d", h, m, s);
}
