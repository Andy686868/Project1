#include<stdio.h>
int sequence_multipliers(int k)
{
    int flag = -1;
    int m = -1;
    for (int i = 1; i < k/2 + 1; i++){
        if (i * (i+1)* (i+2) == k){
            m = i;
            }
        }
    return m;
}

int main(void)
{
    int k,m;
    scanf("%d",&k);
    m = sequence_multipliers(k);
    printf("%d",m);
    return 0;
}