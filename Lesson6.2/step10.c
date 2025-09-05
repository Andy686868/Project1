#include <stdio.h>
#include <math.h>

int main(){
    double x, y, A;
    scanf("%lf %lf %lf", &x, &y, &A);
    printf("%d",fabs(x-y) <= A);
    return 0;
}