#include <stdio.h>


double fatorial(double n);
int euler(int n, int k);

int main(){
    int n;
    scanf("%d", &n);
    
    printf("%d", euler(n));
    return 0;
}

double fatorial(double n){
	double fat = 1;
	
	while(n > 1){
		fat = fat * n;
		n--;
	}
	return fat;
}

int euler(int n, int k){
	return fatorial(n)/(fatorial(k) * fatorial(n-k));
}