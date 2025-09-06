#include <stdio.h>

int main(){
    double e,k = 2,fact=1,g = 1;
    scanf("%lf",&e);
    for (int i = 1; 1 / fact > e; i++){
            fact *= i ;
            g += 1/fact;
    }
    printf("%.8lf\n",g);
    return 0;
}