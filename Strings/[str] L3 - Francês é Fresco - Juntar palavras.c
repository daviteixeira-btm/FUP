#include <stdio.h>
#include <stdbool.h>

bool vogal(char c){
    if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        return true;
    return false;
}
int main(){
	int i = 0;
    char str[100];
    
    scanf("%[^\n]", str);
    
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ' && str[i-1] == str[i+1] && vogal(str[i-1])){
            i = i + 1;
        }else{
            printf("%c", str[i]);
        }
    }
    
    return 0;
}
