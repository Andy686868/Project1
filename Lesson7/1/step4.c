#include <stdio.h>
int main(void)
{
    int K, M,count=0;
    scanf("%d %d",&K, &M);
    for (K; K<=M; K++){
        if (K>0){
            printf("%d ",K);
            count ++;
        }
    
    }
    printf("\n%d",count);
    
    return 0;
}