#include <stdio.h>

int main(){
    int N,a,b;
    scanf("%d",&N);
    int mas[N];
    for (int i=0; i<N;i++){
        scanf("%d",&mas[i]);
    }
    scanf("%d %d",&a,&b);
    printf("%d",mas[a]+mas[b]);
    return 0;
}