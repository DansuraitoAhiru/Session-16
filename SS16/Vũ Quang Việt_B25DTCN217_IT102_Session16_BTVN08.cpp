#include <stdio.h>
#include <string.h>
int main(){
    char str[]="Still in love with Still in love";
    char c;
    int firstLetter= 1;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            firstLetter=1;
            continue;
        }
        if (firstLetter==1) {
            if (str[i] >= 'a' && str[i] <= 'z'){
                str[i] = str[i] - 32;
            }
            firstLetter=0; 
        }
    }
    printf("Ket qua: %s\n", str);
}
