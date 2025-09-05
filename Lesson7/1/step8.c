#include <stdio.h>

int main(){
    int A,B,count=1;
    scanf("%d %d", &A, &B);
    for (A; A <= B ; A++){
        for(int i = 1; i<=count;i++){
            printf("%5d",A);
        }
        count++;
    }
    return 0;
}