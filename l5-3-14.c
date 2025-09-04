#include <stdio.h>
#include <math.h>
int main(void)
{
    int k;
    double n_0 = 7.5e10, l, T=5570.0, N; 
    scanf("%d",&k);
    l = log(2.0) / T;
    N = n_0 * pow(exp(1.0),(-l*k))/1000000000;
    printf("%.2lf",N);

    return 0;
}