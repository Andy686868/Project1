#include <stdio.h>
int main(void)
{
    int N,g, flag=0;
    scanf("%d",&N);
    int mas[N];
    for (int i = 0;i < N; i++){
        scanf("%d",&mas[i]);
    }
    for (int j = 0; j <N; j++){
        if(mas[j]<mas[N-1]){
            printf("%d ",mas[j]);
            flag+=1;
        }
    }
    if (flag == 0){
        printf("0");
    }
    return 0;
}