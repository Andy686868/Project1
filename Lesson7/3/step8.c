#include <stdio.h>

int main(){
    int N,flag = 0;
    scanf("%d",&N);
    while (N != -9999){
        if (N == 2517){
            flag += 1;
        }
        scanf ("%d",&N);
        if (flag >= 1 && N != -9999){
            printf("%d ",N);
        }
    }
}