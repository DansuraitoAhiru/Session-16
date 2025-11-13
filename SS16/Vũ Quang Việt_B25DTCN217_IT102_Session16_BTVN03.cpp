#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Cyrene tier SS++, bite me";
	printf("Chuoi goc: %s\n",str);
	printf("Chuoi dao nguoc: ");
	for(int i=strlen(str)-1;i>=0;i--){
		printf("%c", str[i]);
	}
}
