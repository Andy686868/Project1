#include <stdio.h>
int main(void)
{
    int i,summ = 0;
    scanf("%d",&i);
    while (i != 0)
        {
        summ += i; 
        scanf("%d",&i);
        }
    
    printf("%d",summ);
    return 0;
}