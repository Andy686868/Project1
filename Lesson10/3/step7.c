#include <stdio.h>

int gcd(int x, int y);

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    printf("%d",gcd(x,y));
    return 0;
}

int gcd(int x, int y)
{
    int gcd;
    int min = 0;
    if (x > y) {
        min = y;
    }
    else{
        min = x;
    }
    for (min;min >=1; min--){
        if (x % min == 0 && y % min == 0){
            gcd = min;
            break;
        }
    }
    return gcd;
}