#include <stdio.h>
#include <string.h>

int main(){
    char str1[53];
    char str2[53];
    int result;
    fgets(str1,53,stdin);
    fgets(str2,53,stdin);
    result = strcasecmp(str1,str2);
    if (result==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
 }