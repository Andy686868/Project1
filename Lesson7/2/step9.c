#include <stdio.h>

int main(){
    int N,k=1;
    scanf("%d",&N);
    while (N>9){
        N/=10;
        k++;
    }
    printf("%d", k);
    
}