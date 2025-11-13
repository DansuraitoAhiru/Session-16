#include <stdio.h>
#include <string.h>
int main(){
	char str[]="I luv Emilia";
	for(int i=0;i<strlen(str);i++){
		printf("%c", str[i]);
		if(i<strlen(str)-1){
			printf(" ");
		}
	}
}
	
