#include <stdio.h>
     
int main(){
    int produto, primeiro, segundo,dif1, dif2;
    scanf("%d %d %d", &produto, &primeiro, &segundo);
    
    dif1 = produto - primeiro;
    dif2 = produto - segundo;
    
    if(dif1 < 0)
        dif1 = - dif1;
    if(dif2 < 0)
        dif2 = - dif2;
    if(dif1 < dif2)
        printf("primeiro");
    else if (dif2 < dif1)
        printf("segundo");
    else
        printf("empate");
    return 0;
}
