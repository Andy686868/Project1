#include <stdio.h>

int main(){
    int N,num;
    int g = -9999999;
    scanf("%d",&N);
    for (int i = 1; i<=N; i++){
        scanf("%d",&num);
        if (num != g){
            printf("%d ",num);
        }
        g = num;
    }
    return 0;
}