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
    for (int j = 0; j < N; j++){
        if (mas[j] > sr){
            printf("%d ",mas[j]);
        }
    }
    for (int g = 0; g < N; g++){
        if (mas[g] <= sr){
            printf("%d ",mas[g]);
        }
    }
    return 0;
}