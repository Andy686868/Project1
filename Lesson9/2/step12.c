#include <stdio.h>

int main(){
    char str[53];
    int count = 0;
    int fr = 0;
    int sc = 0;
    char c;
    fgets(str,53,stdin);
    while (str[count] != '\0' ){
        c = str[count];
        fr = count;
        while(!(str[count]=='\0'|| str[count]=='\n'|| str[count]==' ')){
            count++;
        }
        if (str[fr]==str[count-1]){
            for (;fr < count;fr++){
                printf("%c",str[fr]);
            }
            printf(" ");
        }
        count++;
    }
    return 0;
}
