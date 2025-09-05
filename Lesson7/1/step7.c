#include <stdio.h>
int main(void)
{
    int n,m,f,g=1;
    scanf("%d",&n);
    m = 0;
    g = 1;
    for (int i = 2; i<=n; i++){
        f = m + g;
        m = g;
        g = f;
    }

    printf("%d",g);
    return 0;
}