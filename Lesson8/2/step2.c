#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int k = 0; k < N; k++){
        for (int l = 0; l < M; l++){
            printf("%d ",matrix[k][l]);
        }
        printf("\n");
    }

    return 0;
}