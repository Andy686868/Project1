#include <stdio.h>

int main(){
    double N,M;
    int flag = 1;
    scanf("%lf",&N);
    M = N;
    while (N >= 2){
        if (N == 2){
            flag = 0;
        }
        N /= 2;
    }
    if (flag == 0 || M == 1) {
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}