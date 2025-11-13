#include <stdio.h>
#include <string.h>
int main() {
    char str[]="You're my special1233443'";
    int i=0;
    char c;
    int text=0, num=0, special= 0;
    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            text++;
        }
        else if (str[i] >= '0' && str[i] <= '9') {
            num++;
        }
        else {
            special++;
        }
    }
    printf("So ky tu la chu cai: %d\n", text);
    printf("So ky tu la chu so: %d\n", num);
    printf("So ky tu dac biet: %d\n", special);
}
