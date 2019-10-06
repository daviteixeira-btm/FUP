#include <stdio.h>

void preenche(int n, int v[]);
int procura(int n, int v[], int grito);

int main(){
    int n1, n2, falta = 1;
    scanf("%d", &n1);
    
    int vetor1[n1];
    
    preenche(n1, vetor1);
    
    scanf("%d", &n2);
    
    int vetor2[n2];
    
    preenche(n2, vetor2);
    
    for(int i = 0; i < n1; i++){
        if(procura(n2, vetor2, vetor1[i]) == -1)
            falta = 0;
    }
    
    if(falta) 
        printf("sim");
    else 
        printf("nao");
    
    return 0;
}

void preenche(int n, int v[]){
  for (int i = 0; i < n; i++)
    scanf("%d", &v[i]);
}

int procura(int n, int v[], int grito){
  for (int i = 0; i < n; i++) {
    if (v[i] == grito)
      return i;
  }
  return -1;
}
