#include <stdio.h>

int main(){
    int a, b, c, h, l;
    scanf("%d %d %d %d %d", &a, &b, &c, &h, &l);
    
    int media1 = (a+b+c)/3;
    int media2 = (h+l)/2;
    
    if(media1 > media2){
        printf("N");
    }else{
        printf("S");
    }
    return 0;
}