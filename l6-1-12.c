#include <stdio.h>
int main(void)
{
    int a, b ;
    scanf("%d %d", &a , &b);
    switch (a){
        case 1:
            printf("%d",b);
            break;
        case 2:
            printf("%d",b+31);
            break;
        case 3:
            printf("%d",b+59);
            break;
        case 4:
            printf("%d",b+90);
            break;
        case 5:
            printf("%d",b+120);
            break;  
        case 6:
            printf("%d",b+151);
            break;
        case 7:
            printf("%d",b+181);
            break;
        case 8:
            printf("%d",b+212);
            break;
        case 9:
            printf("%d",b+243);
            break;
        case 10:
            printf("%d",b+273);
            break;
        case 11:
            printf("%d",b+304);
            break;
        case 12:
            printf("%d",b+334);
            break;   
        default:
            break;
    }

    return 0;
}