#include <stdio.h>

int main(){
    int N,M,g=0,sum=0;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    for ( int  i = 0; i < N; i++){
        for (int j = 0; j < M; j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    for (int a = M-1; a >= 0; a--){
        for ( int  b = 0; b < N; b++){
            for (int c = 0; c < M; c++){
                if (a==c){
                    sum+=matrix[b][c];
                }
            }
        }
        printf("%d ",sum);
        sum = 0;
    }
    return 0;
}
    
 