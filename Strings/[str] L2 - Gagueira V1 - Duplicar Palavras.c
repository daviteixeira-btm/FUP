#include <stdio.h>
#include <string.h>

int nscanf(char string[], int n);

int main(){
  char frase[100];
  nscanf(frase, 100);

  for (char *p = strtok(frase, " "); p != NULL; p = strtok(NULL, " "))
    printf("%s %s ", p, p);

  return 0;
}

int nscanf(char string[], int n){
  int i = 0;
  while ( (string[i] = fgetc(stdin)) != '\n' && i < n)
    i++;
  string[i] = '\0';
  return i;
}