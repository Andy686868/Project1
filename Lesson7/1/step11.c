#include <stdio.h>
int main(void)
{
    int N,count=0;
    scanf("%d",&N);
    for (int i=1;i<=N;i++){
        if (N%i==0){
            count++;
        }
    }
    if (count > 2){
        printf("0");
    }
    else{
        printf("1");
    }
    return 0;
}