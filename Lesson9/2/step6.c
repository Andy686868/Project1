#include <stdio.h>

int main(){
    char str[102];
    fgets(str,102,stdin);
    int count = 0;
    while (str[count] != '\0')
    {
        if (str[count] == ' ' && str[count+1] != ' '&& count != 0){
            printf("%c",str[count]);
        }
        else if(str[count] != ' '){
            printf("%c",str[count]);
        }
        count++;
    }
    return 0;
}