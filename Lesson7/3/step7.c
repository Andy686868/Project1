#include <stdio.h>

int main(){
    int N,g=-9999,flag = 0, count = 0 ;
    scanf("%d",&N);
    while(N != -9999 && flag == 0){
        if (N<=g){
            flag += 1;
        }
        g = N;
        scanf("%d",&N);
        count ++;
    }
    if (flag == 0){
       printf("%d",flag); 
    }
    else{
        printf("%d",count);
    }

    return 0;
}