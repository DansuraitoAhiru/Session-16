#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Noi voi tat ca Domcon rang anh iu Cyrene";
    int count = 1;
    int i;
    while(str[i] ==' ' && i < strlen(str)){
        i++;
    }
    if(i==strlen(str)){
        printf("0 co tu nao trong chuoi!!");
    }
    for(i=0;i<strlen(str)-1;i ++){
        if(str[i] ==' ' && str[i+ 1] !=' ' && str[i+ 1] != '\0'){
        count++;
        }
    }
    printf("Chuoi la: %s",str);
    printf("\nSo tu co trong chuoi la %d",count); 
}
