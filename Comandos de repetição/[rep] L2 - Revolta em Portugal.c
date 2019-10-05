#include <stdio.h>

int main(){
    int soldados, rebeldes, countS = 0, countR = 0;
    scanf("%d %d", &soldados, &rebeldes);
    
    for(int i = soldados; i <= rebeldes; i++){
        if(i%2 == 0){
            countS = countS + i;
        }else{
            countR = countR + i;
        }
    }
    
    if(countS > countR){
        printf("soldados");
    }else{
        printf("rebeldes");
    }
    return 0;
}