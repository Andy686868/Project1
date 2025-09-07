#include <stdio.h>
int main(void)
{
    int N,g, flag=0;
    scanf("%d",&N);
    int mas[N];
    for (int i = 0;i < N; i++){
        scanf("%d",&mas[i]);
        if (mas[i]%2==0){
            printf("%d ",mas[i]);
        }
    }
    for (int j =0; j < N;j++){
        if (mas[j]%2 == 1){
            printf("%d ",mas[j]);
        }
    }
    return 0;
}