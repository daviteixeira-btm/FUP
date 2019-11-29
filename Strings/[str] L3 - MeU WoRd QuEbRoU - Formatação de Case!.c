#include <stdio.h>
#include <ctype.h>

int main(){
	
	char str[100], c;
	scanf("%[^\n]\n%c", str, &c);
	int i = 0;
	
	for(i = 0; str[i] != '\0'; i++){
		switch(c){
			case 'M':
				str[i] = toupper(str[i]);
				break;
			case 'm':
				str[i] = tolower(str[i]);
				break;
			case 'p':
				if(i == 0 && str[1] != ' ') str[0] = toupper(str[0]);
				else if(i == 0 && str[1] == ' ') str[0] = tolower(str[0]);
				else if(str[i-1] == ' ' && str[i+1] != ' ') str[i] = toupper(str[i]);
					break;
			case 'i':
				if(str[i] >= 'a' && str[i] <= 'z') str[i] = toupper(str[i]);
				else str[i] = tolower(str[i]);
				break;
		}
	}
	printf("%s\n", str);
	return 0;
}
