#include <stdio.h>
int factorial(int k);
int main(void)
{
    int k;
    scanf("%d",&k);
    printf("%d",factorial(k));
    return 0;
}
int factorial(int k)
{
    int result = 1;
    for (int i = 2; i <=k; i++){
        result *= i;
    }
    return result;
    // напишите здесь тело функции factorial  
}