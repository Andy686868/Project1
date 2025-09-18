#include <stdio.h>
#include <string.h>

int main(){
    char str1[53];
    char str2[53];
    int a, b;
    scanf("%s",str1);
    scanf("%s",str2);
    a = strlen(str1);
    b = strlen(str2);
    if (str1[0]+32==str2[b-1]||str1[a-1]==str2[0]+32){
        printf("yes");
    }
    else {
        printf("no");
    }
    return 0;
}