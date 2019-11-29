#include <stdio.h>

int nscanf(char string[], int n){
	int i = 0;
	while((string[i] = fgetc(stdin)) != '\n' && i < n)
		i++;
	string[i] = '\0';
	return i;
}

int main(){
	
	char frase[100];
	int tamanho;
	
	tamanho = nscanf(frase, 100)-1;
	
	while(tamanho >= 0){
		fputc(frase[tamanho], stdout);
		tamanho--;
	}
	
	return 0;
}
