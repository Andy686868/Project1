#include <stdio.h>

int main(){
    char str[15];

    fgets(str,15,stdin);
    int count = 0,schet = 0;
    char str2[15];
    fgets(str2,15,stdin);

    while (str[count]!='\0')
    {
        if (str[count]!=str2[count]){
            schet++;
        }
        else{
        }
        count++;
    }
    printf("%d",schet);
    return 0;
    
}