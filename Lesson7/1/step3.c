#include <stdio.h>
int main(void)
{
    int K, M;
    scanf("%d %d",&K, &M);
    for (K; K<=M; K++){
        if (K>0){
            printf("%d ",K);
        }
    }
    
    return 0;
}