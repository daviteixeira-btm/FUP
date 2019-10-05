#include <stdio.h>

int main(){
    int n, x, count = 0;
    scanf("%d %d", &n, &x);
    
    while(x != 0){
        if(x % 10 == n)
            count++;
        x /= 10;
    }
    printf("%d", count);
    return 0;
}