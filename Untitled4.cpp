#include <stdio.h>
#include <string.h>
int main(){
	char str[]="Noi voi tat ca Underdogs rang em iu Bich Tien";
	printf("Chuoi: %s\n",str);
	char x;
	int count=0;
	printf("Nhap ky tu: ");
	scanf("%c", &x);
	for(int i=0;i<strlen(str);i++){
		if(str[i]==x){
			count++;
		}
	}
	printf("Ky tu %c da xuat hien %d lan trong chuoi",x,count);
}
