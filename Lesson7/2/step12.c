#include <stdio.h>

int main(){
    int N,M;
    scanf("%d",&N);
    while (N>0){
        M = N % 10;
        printf("%d",M);
        N /= 10;
    }
    return 0;
}