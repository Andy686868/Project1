#include <stdio.h>

int main(){
    int N,flag = 0,summ=0;
    scanf("%d",&N);
    while (N != -9999){
        if (N == 0){
            flag += 1;
        }
        scanf ("%d",&N);
        if (flag >= 1 && flag < 2 &&N != -9999){
            summ +=N;
        }
    }
    printf("%d",summ);
    return 0;
}