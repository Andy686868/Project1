#include <stdio.h>

int main(){
    char str[23];
    fgets(str,23,stdin);
    int count=0,fl = 0,err = 0;
    while (str[count] !='\0'){
        if ((str[count] < 48 || str[count] > 57) && str[count] != '.' && str[count] != '\n'&& str[count] != '-'){
            err = 1;
        }
        else if(str[count]=='.' ){
            fl += 1;
            if (count == 0 || str[count+1] == '\0' || str[count+1] == '\n'){
                err = 1;
            }
        }
        else if(str[count] == '-' && count != 0){
            err = 1;
        }
        count++;
    }
    if (err == 1 || fl > 1){
        printf("error");
    }
    else if (fl == 1){
        printf("float");
    }
    else{
        printf("int");
    }
    return 0;
}