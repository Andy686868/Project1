#include <stdio.h>

int main(){
    char a, b, c;
    int sum = 0;
    int flag = 0;
    scanf("%c%c%c",&a, &b, &c);
    switch(a){
        case 'r':
            sum += 4;
            break;
        case '-':
            sum += 0;
            break;
        default:
            flag = 1;
            break;
    }
    switch(b){
        case 'w':
            sum += 2;
            break;
        case '-':
            sum += 0;
            break;
        default:
            flag = 1;
            break;
    }
    switch(c){
        case 'x':
            sum += 1;
            break;
        case '-':
            sum += 0;
            break;
        default:
            flag = 1;
            break;
    }
    switch (flag){
        case 1:
            printf("Invalid format");
            break;
        default:
            printf("%d",sum);
            break;
    }
    return 0;

}