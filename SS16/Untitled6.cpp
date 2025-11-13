#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Oke okela";
    int count=0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    printf("So ky tu la chu cai trong chuoi: %d\n", count);
}
