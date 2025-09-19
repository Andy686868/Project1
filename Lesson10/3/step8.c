#include <stdio.h>

int gcd(int x, int y);
void reduce_fraction(int *a, int *b);

int main(){
    int x,y;

    scanf("%d %d",&x,&y);
    // printf("%d",gcd(x,y));
    reduce_fraction(&x,&y);
    return 0;
}

int gcd(int x, int y)
{
    int gcdn;
    int min = 0;
    if (x > y) {
        min = y;
    }
    else{
        min = x;
    }
    for (min;min >=1; min--){
        if (x % min == 0 && y % min == 0){
            gcdn = min;
            break;
        }
    }
    return gcdn;
}
void reduce_fraction(int *a, int *b)
{
    int gcdn = gcd(*a,*b);
    *a = *a / gcdn; 
    *b = *b / gcdn;
    // printf("\n%d %d",*a,*b);
}