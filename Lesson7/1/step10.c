#include <stdio.h>
int main(void)
{
    int N,count=0;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        if (N%i==0){
            printf("%d ",i);
            count++;
        }
    }
    printf("\n%d",count);
    return 0;
}