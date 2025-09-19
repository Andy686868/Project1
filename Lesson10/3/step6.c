#include <stdio.h>

void char_cesar(char *ch, int shift);

int main(){
    int shift;
    char ch;
    scanf("%c %d",&ch,&shift);
    char_cesar(&ch,shift);

    return 0;
}

void char_cesar(char *ch, int shift){

    if (*ch >= 65 && *ch <=90){
        *ch = (*ch - 65 + shift) % 26 + 65;
    }
    else if (*ch >= 97 && *ch <=122){
        *ch = (*ch - 97 + shift) % 26 + 97;
    }

}