#include <stdio.h>
int main(void)
{
    int N;
    scanf("%d",&N);
    int matrix[N][N];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (i % 2 == 0){
                matrix[i][j]=j+1;
            }
            else{
                matrix[i][j]=N-j;
            }
        }
    }
    for (int g = 0; g < N; g++){
        for (int h = 0; h < N; h++){
            printf("%d ", matrix[g][h]);
        }
        printf("\n");
    }
    return 0;
}