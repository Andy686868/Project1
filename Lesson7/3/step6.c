#include <stdio.h>

int main(){
    int N,g=-9999,flag = 0;
    scanf("%d",&N);
    while(N != -9999){
        if (N<=g){
            flag += 1;
        }
        g = N;
        scanf("%d",&N);
    }
    if (flag == 0){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}