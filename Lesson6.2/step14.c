#include <stdio.h>
int main(void)
{
    int a, b, c, d,f=0;
    scanf("%d.%d.%d.%d",&a,&b,&c,&d);
    switch (a>=0 && a <=255){
        case 1:
            f += 1;
            break;
        default:
            break;
    }
    switch (b<=255 && b >=0){
        case 1:
            f += 1;
            break;
        default:
            break;
    }
    switch (c<=255 && c >=0){
        case 1:
            f += 1;
            break;
        default:
            break;
    }
    switch (d<=255 && d >=0){
        case 1:
            f += 1;
            break;
        default:
            break;
    }
    switch (f){
        case 4:
            printf("IP is valid!");
            break;
    
        default:
            printf("IP is invalid!");
            break;
    }
    return 0;
}