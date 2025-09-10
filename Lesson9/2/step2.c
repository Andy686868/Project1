#include <stdio.h>

int main(){
    char ch[30];
    char s;
    int count = 0;
    while ((s = getchar())!='\0'&& s !='\n'){
        if (s!='\n'){
           count++; 
        }
    }
    printf("%d",count);
    return 0;

}