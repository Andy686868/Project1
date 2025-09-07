#include <stdio.h>

int main(){
    int N,summ=0,count=0;
    double sr;
    scanf("%d",&N);
    int mas[N];
    for(int i = 0; i < N; i++){
        scanf("%d",&mas[i]);
    }
    for (int j = N/2; j < N; j++){
        printf("%d ", mas[j]);
    }
      for (int g = 0; g < N/2; g++){
        printf("%d ", mas[g]);
    }
    return 0;
}
