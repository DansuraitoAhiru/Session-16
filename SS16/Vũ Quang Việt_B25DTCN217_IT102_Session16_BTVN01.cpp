#include <stdio.h>
#include <string.h>
int main(){
	char str[100];
	printf("Nhap chuoi: ");
	fgets(str,sizeof(str),stdin);
	str[strcspn(str,"\n")]='\0';
	printf("Chuoi ban nhap la: %s\n",str);
	printf("Do dai chuoi: %lu\n", strlen(str));
}
