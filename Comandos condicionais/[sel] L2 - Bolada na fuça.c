#include <stdio.h>

int main(){
	
	char entrada;
	int forca, T;
	scanf("%c\n%d", &entrada, &forca);
	
	if(entrada == 'c') T = 18;
	else T = 20;
	
	int poder = ((forca * T) - 80)/10;
	
	if(poder < 150){
		printf("Fraco, nem passou");
	}else if(poder < 180){
		printf("Perfeito");
	}else if(poder < 210){
		printf("Satisfeito");
	}else{
		printf("Muito forte, bola fora");
	}	
	
}