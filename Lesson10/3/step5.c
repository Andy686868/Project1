#include <stdio.h>

void char_register(char *ch, int fl);

int main(){
    int fl;
    char ch;
    scanf("%c %d",&fl,&ch);
    char_register(&ch,fl);

    return 0;
}

void char_register(char *ch, int fl){
    if (*ch >=97 && *ch <= 122 && fl == 1){
        *ch = *ch - 32;
    }
    else if (*ch >=65 && *ch <= 90 && fl == 0){
        *ch = *ch + 32;
    }

}