#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	
	char **v = (char**) malloc(n * sizeof(char*));
	
	for(int i = 0; i < n; i++){
		int tamanho_linhas;
		scanf("%d", &tamanho_linhas);
		
		v[i] = (char*) malloc((tamanho_linhas + 1) * (sizeof(char)));
		
		if(v == 0){
			printf("erro");
			return 1;
		}
		
		scanf("%[^\n]", v[i]);
		
	}
	
	for(int i = n-1; i >= 1; i--){
		for(int j = 0; j < n; j++){
			if((strcmp(v[j], v[j+1]) > 0)){
				char *aux;
				aux = v[j];
				v[j] = v[j+1];
				v[j+1] = aux;
			}
		}
	}
	
	for(int i = 0; i < n; i++){
		printf("%s\n", v[i]);
	}
	
	return 0;
}
