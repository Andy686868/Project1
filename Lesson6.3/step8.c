#include <stdio.h>
int main(void)
{
    int a, price=350;
    scanf("%d", &a);
    if (a >= 500){
        price += (a-500) * 2; 
    }
    printf("%d",price);
    return 0;
}