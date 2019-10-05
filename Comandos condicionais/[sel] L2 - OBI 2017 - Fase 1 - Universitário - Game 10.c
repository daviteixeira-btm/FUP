#include <stdio.h>
     
     int main(){
         int N, D, A;
         scanf("%d %d %d", &N, &D, &A);
         if(A == D){
             printf("0");
         }else if(A < D){
             printf("%d", D - A);
        }else if(A > D){
            printf("%d", (N - A) + 1 + (D - 1));
        }
        return 0;
    }
