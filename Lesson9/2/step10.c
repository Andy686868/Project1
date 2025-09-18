#include <stdio.h>

int main() {
    char str[102];
    int i = 0;
    int count = 0;
    fgets(str, 102, stdin);

    while (str[count] != '\0'){
        count++;
    
    }
    count = count - 2;
    for (int a = 0; a <= count; a++){
        printf("%c",str[a]);
        if ((count - a) % 3 == 0){
            printf (" ");
        }
    }
}