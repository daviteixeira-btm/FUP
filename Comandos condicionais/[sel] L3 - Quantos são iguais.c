#include <stdio.h>

int main(){
    int n1, n2, n3;
    scanf("%d %d %d", &n1, &n2, &n3);
    
    if((n1 == n2) && (n1 == n3)){
        printf("3");
    }else if(n1 == n2){
        printf("2");
    }else if(n1 == n3){
        printf("2");
    }else if(n2 == n3){
        printf("2");
    }else if((n1 != n2) && (n1 != n3) && (n2 != n3)){
        printf("0");
    }else{
        printf("1");
    }
    
    return 0;
}