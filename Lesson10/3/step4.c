#include <stdio.h>

void minmax(int *x, int *y);

int main(){
    int x,y;
    scanf("%d %d",&x,&y);
    minmax(&x,&y);
    return 0;
}

void minmax(int *x, int *y)
{
    int min;
    int max;
    if (*x>*y){
        min = *y;
        max = *x;
    }
    else{
        min = *x;
        max = *y;
    }
    *x = min;
    *y = max;
}
