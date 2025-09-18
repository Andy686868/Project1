#include <stdio.h>
#include <string.h>

int main(){
    char str[23];
    char strp[55] = {"Hello, "};
    scanf("%s",str);
    strcat(strp, str);
    printf("%s",strp);

}