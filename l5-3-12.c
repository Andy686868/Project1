#include <stdio.h>
int main(void)
{
    int num, x1, x2, x3, x4;
    scanf("%d",&num);
    x3 =( num / 1000 - 7 + 10) % 10;
    x4 = (num / 100 % 10 - 7 + 10) % 10;
    x1 = (num / 10 % 10  - 7 + 10) % 10;
    x2 = (num % 10 - 7 + 10) % 10;
    printf("%d%d%d%d", x1, x2, x3, x4);
    return 0;
}