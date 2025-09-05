/*#include <stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d %d",&x, &y);
    z = x == y;
    switch(z){
        case 1:
            printf("1");
            break;
        default:
            printf("0");
            break;
    }
    return 0;
}*/
#include <stdio.h>
int main(void)
{
    int x,y;
    scanf("%d %d",&x, &y);
    printf("%d",x==y);
    return 0;
}