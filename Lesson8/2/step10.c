#include <stdio.h>

int main(){
    int N;
    scanf("%d",&N);
    int matrix[N][N];
    for ( int  i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int s;
    scanf("%d",&s);
    int shift = s % N;
    if (shift < 0) {
        shift += N;  
    }
    for(int a = 0; a < N; a++){
        for(int b = 0; b < N; b++){
            printf("%d ",matrix[a][(b-shift+N)%(N)]);
        }
        printf("\n");
    }
    return 0;
}