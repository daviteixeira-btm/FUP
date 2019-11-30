#include <stdio.h>

int nscanf(char string[], int n);

int main(){
  int inicio, quant;
  char texto[100];
  
  nscanf(texto, 100);
  
  scanf("%d %d", &inicio, &quant);
  
  for (int i = 0; i < quant; i++)
  	fputc(texto[inicio+i], stdout);
  	
  return 0;
}

int nscanf(char string[], int n){
  int i = 0;
  while ((string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}