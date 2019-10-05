#include <stdio.h>

int main(){
    int C, A, quociente, resto, resp;
    scanf("%d %d", &C, &A);
    quociente = A/(C-1);
    resto = A%(C-1);
    resp = quociente;
    if(resto > 0){
        resp = resp + 1;
    }
    printf("%d", resp);
    return 0;
}