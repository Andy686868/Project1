#include<stdio.h>
int min(int a, int b, int c)
{
    int res;
    if (a <= b && a <= c){
        res = a;
    } 
    else if( b <= a && b <= c){
        res = b;
    }
    else{
        res = c;
    }
    return res;
}

int main(void)
{
    int a, b, c;
    scanf("%d %d %d",&a,&b,&c);
    printf("%d",min(a,b,c));
    return 0;
}