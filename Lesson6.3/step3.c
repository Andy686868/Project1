#include <stdio.h>
int main(void)
{
    int a, b, c,f=0;
    scanf("%d %d %d", &a, &b, &c);
    if (a>0){f+=1;}
    if (b>0){f+=1;}
    if (c>0){f+=1;}
    printf("%d",f);
    return 0;
}