#include <stdio.h>
#include <ctype.h>

int nscanf(char string[], int n);
int checa_elemento(char letra, char string[]);

int main() {
  char frase[50], vogais[] = "aeiouAEIOU";
  nscanf(frase, 50);
  for (int i = 0; frase[i] != '\0'; i++){
    if (isalpha(frase[i])) {
      if (checa_elemento(frase[i], vogais))
        frase[i] = 'v';
      else
        frase[i] = 'c';
    }
 }
 printf("%s", frase);
 return 0;
 
}

int nscanf(char string[], int n){
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}

int checa_elemento(char letra, char string[]){
  for (int i = 0; string[i] != '\0'; i++){
  	if (string[i] == letra) {
  	  return 1;
  	}
  }
  return 0;
}