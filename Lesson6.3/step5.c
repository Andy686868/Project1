#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1,y1,x2,y2,l1,l2;
    scanf("%d %d %d %d",&x1, &y1,&x2, &y2);
    l1 = pow(x1,2)+ pow(y1,2);
    l2 = pow(x2,2)+ pow(y2,2);
    if (l1 < l2){
        printf("1");
    }
    else if (l1 == l2){
        printf("0");
    }
    else{
        printf("2");
    }
    return 0;
}