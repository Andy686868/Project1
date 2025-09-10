#include <stdio.h>

int main(){
    int c;
    int count = 1, flag = 0;
    while ((c = getchar())!='\n' && c != '\0'){
        if (c == ' '){
            if (flag == 0){
                count++;
                flag += 1;
            } 
        }
        else {
            flag = 0;
        }
    }
    printf("%d", count);
    return 0;
    
}
