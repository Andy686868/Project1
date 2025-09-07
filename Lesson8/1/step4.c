#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int mas[N];
    for (int i=0; i<N;i++){
        scanf("%d",&mas[i]);
        printf("%d ",mas[i]);
    }
    return 0;
}