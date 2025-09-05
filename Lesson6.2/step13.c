#include <stdio.h>
int main(void)
{
    double x, y,f;
    scanf("%lf %lf", &x, &y);
    f = ((x>0)&&(y>0))+((x<0)&&(y>0))*2 + ((x<0)&&(y<0))*3 + ((x>0)&&(y<0))*4;
    printf("%.lf",f);
    return 0;
}