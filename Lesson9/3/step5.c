#include <stdio.h>
#include <string.h>

int main(){
    char str1[53];
    char str2[53];
    int result;
    scanf("%s",str1);
    scanf("%s",str2);
    result = strcmp(str1,str2);
    if (result==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}