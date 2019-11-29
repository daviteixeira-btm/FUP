#include <stdio.h>

int nscanf(char string[], int n){
	int i = 0;
	while((string[i] = fgetc(stdin)) != '\n' && i < n)
		i++;
	string[i] = '\0';
	return i;
}

int main(){
	
	char frase[100], letra;
	int i, count = 0;
	
	nscanf(frase, 100);
	
	letra = fgetc(stdin);
	
	for(i = 0; frase[i] != '\0'; i++){
		if(frase[i] == letra){
			count++;
		}
	}
	
	printf("%d", count);	
	return 0;
}
