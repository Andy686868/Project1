#include <stdio.h>

int main(){
    int N,summ=0,count=0;
    double sr;
    scanf("%d",&N);
    int mas[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&mas[i]);
        summ +=mas[i];
        count++;
    }
    sr = (float)summ / count;
    printf("%.2lf",sr);
    return 0;
}