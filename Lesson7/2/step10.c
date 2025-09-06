#include <stdio.h>
#include <math.h>

int main (){
    double N;
    int k=1;
    scanf("%lf",&N);
    while (pow(2,k)<=N)   {
       printf("%d ",k);
       k++;
    }
    return 0;

}