#include <stdio.h>
int main(void)
{
    int num;
    scanf("%d",&num);
    num = num % 2;
    switch(num){
        case 0:
            printf("Не любит");
            break;
        case 1:
            printf("Любит");
            break;
        default:
            break;
    }
    return 0;
}