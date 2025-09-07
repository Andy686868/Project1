#include <stdio.h>

int main(){
    int N, M;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    //int matrix[M][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
      for (int k = 0; k < M; k++){
        for (int l = 0; l < N; l++){
            printf("%d ",matrix[l][k]);
        }
        printf("\n");
    }
    return 0;
}
