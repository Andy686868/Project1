#include <stdio.h>

int main(){
    char ch;
    scanf("%c",&ch);
    if (ch >= 48 && ch <=57){
        printf("digit");
    }
    else if((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122) ){
        printf("en");
    }
    else{
        printf("error");
    }
    return 0;
}