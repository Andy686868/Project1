#include <stdio.h>

int factorial(int k);

int main(void)
{
    int N,K,C;
    scanf("%d %d",&N,&K);
    C = factorial(N)/(factorial(K)*(factorial(N-K)));
    printf("%d",C);
    return 0;
}
int factorial(int k)
{
    int result = 1;
    for (int i = 2; i <=k; i++){
        result *= i;
    }
    return result;
}