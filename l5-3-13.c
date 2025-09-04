#include <stdio.h>
#include <math.h>
int main(void)
{
    int h;
    double p_0 = 1.29, z = 1.25e-4, p;
    scanf("%d", &h);
    p = p_0 * pow(exp(1.0),(-h*z));
    printf("%.2lf",p);
    return 0;
}