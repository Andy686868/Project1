#include <stdio.h>
int main(void)
{
    int k,i,m=1;
    scanf("%d",&k);
    for (int i = 1 ; i<=k; ++i){
        m *= i;
    }
    printf("%d",m);
    return 0;
}