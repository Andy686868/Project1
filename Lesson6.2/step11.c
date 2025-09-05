
/*#include <stdio.h>
int main(void)
{   
    int a,b,c;
    scanf("%d %d",&a, &b);
    switch(a>b){
        case 1:
            printf("%d",b);
            break;
        default:
            printf("%d",a);
            break;;
    }


    return 0;
}*/
#include <stdio.h>
int main(void) {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a * (a <= b) + b * (b < a));
}