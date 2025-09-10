#include <stdio.h>

int main(){
    int K;
    scanf("%d",&K);
    for (int i=0; i<K;i++){
        printf("%c",i+91-K);
    }
    return 0;

}