#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d",&A, &B);
    for (B; B>=A; B--)
    {
        printf("%d ",B);
    }
    return 0;
}