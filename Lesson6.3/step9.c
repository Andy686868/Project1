#include <stdio.h>
int main(void)
{
    int a, n;
    scanf("%d %d", &a, &n);
    if (a == 31 && !(n == 2 || n == 4 || n == 6 || n == 9  || n == 11)){
        printf("correct");
    }
    else if(a==30 && n != 2){
        printf("correct");
    }
    else if (a<=29) {
        printf("correct");
    }
    else{
        printf("error");
    }

    return 0;
}