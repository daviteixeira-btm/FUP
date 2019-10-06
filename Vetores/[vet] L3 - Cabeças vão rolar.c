#include <stdio.h>

int rotacao(int n_elem, int pos, int quant_rot);
int vencedor(int numero_pessoas);


int main(){
    
    int n, x;
    scanf("%d %d", &n, &x);
    printf("%d", rotacao(n, vencedor(n), x-1));
    return 0;
}

int vencedor(int numero_pessoas){
    if(numero_pessoas == 1){
        return 1;
    }else if(numero_pessoas % 2 == 0){
        return 2 * vencedor(numero_pessoas / 2) - 1;
    }else if(numero_pessoas % 2 == 1){
        return 2 * vencedor((numero_pessoas-1) / 2) + 1;
    }else{
        return -1;
    }
}

int rotacao(int n_elem, int pos, int quant_rot) {
  for (int i = 0; i < quant_rot; i++) {
    pos++;
    if (pos == n_elem+1)
      pos = 1;
  }
  return pos;
}