#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int mas[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&mas[i]);
    }
    for (int j = N-1; j >=0; j--){
        printf("%d ",mas[j]);
    }
    return 0;
}