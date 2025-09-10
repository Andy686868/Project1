#include <stdio.h>
int main(void) {
    char str[101];
    char ch;
    int count = 0, flag = 0;
    scanf("%c \n",&ch);
    //fflush(stdin);
    fgets(str, 101, stdin);
    for (; str[count] != '\0'; count++ ){
        if (str[count]== ch && flag == 0){
            flag += 1;
            printf("%d ",count);
        }
    }
    if (flag == 0){
        printf("-1");
    }
    return 0;
}