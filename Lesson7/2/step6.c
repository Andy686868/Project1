#include <stdio.h>
int main(void)
{
    int i,min,max;
    scanf("%d",&i);
    min = i;
    max = i;
        while (i!=0)
        {
            if (max < i) {
                max = i;
            }
            if (min > i){
                min = i;
            }
            scanf("%d",&i);
        }
    printf("%d %d",max,min);
          

    return 0;
}