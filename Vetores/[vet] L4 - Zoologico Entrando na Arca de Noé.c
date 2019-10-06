#include <stdio.h>
#include <stdlib.h>

int checar_oposto(int n, int v[], int j);

int main(){
    int n, n_pares = 0;
    scanf("%d", &n);
    int animais[n];
    
    for(int i = 0; i < n; i++)
        scanf("%d", &animais[i]);
    
    for(int i = 0; i < n; i++)
        n_pares += checar_oposto(n, animais, i);
    
    printf("%d", n_pares);
    
    return 0;
}

int checar_oposto(int n, int v[], int j) {
  for (int i = 0; i < n; i++) {
    if (v[i] != v[j] && abs(v[i]) == v[j]) {
      v[i] = 0;
      v[j] = 0;
      return 1;
    }
  }
  return 0;
}