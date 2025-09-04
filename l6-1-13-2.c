#include <stdio.h>
int main(void)
{
    int k, x, m = 1;
    scanf("%d %d",&k, &x);
    switch (k){
        case 4:
            m *= x % 10;
            x /= 10;
        case 3:
            m *= x % 10;
            x /= 10;
        case 2:
            m *= x % 10;
            x /= 10;
        case 1:
            m *= x % 10;
            printf("%d ",m);
            break;
        default:
            break;

    }
    return 0;
}