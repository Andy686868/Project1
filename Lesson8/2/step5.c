#include <stdio.h>
#include <math.h>

int main(void)
{
    int N;
    scanf("%d",&N);
    int matrix[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i >= j){
                matrix[i][j]=(i-j)%N+1;
            }
            else{
                matrix[i][j]=(i-j)*(-1)%N+1;
            }
            
        }
    }
     for (int k = 0; k < N; k++){
        for (int l = 0; l < N; l++){
            printf("%d ",matrix[l][k]);
        }
        printf("\n");
    }
    return 0;
}