#include <stdio.h>

int main(){
    int N,M,g=0,sum=0;
    scanf("%d %d",&N,&M);
    int matrix[N][M];
    int matrix2[M];
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
        matrix2[a] = sum; 
        //printf("%d %d \n",a,sum);
        sum = 0;
    }
    for(int f=0; f<M; f++){
        //printf("%d \n",matrix2[f]);
    }
    int max = 0, min = 0;
    max = matrix2[0];
    int max_p = 0;
    min = matrix2[0];
    int min_p = 0;
    //printf("max = %d min = %d\n",max, min);
    for (int d = 1; d < M; d++){
        if (max < matrix2[d]){
            max = matrix2[d];
            max_p = d;
        }
        if (min > matrix2[d]){
            min = matrix2[d];
            min_p = d;
        }
    }
    for (int e = 0; e < N; e++){
        for (int h = 0; h < M; h++){
            if (h == max_p){
                printf("%d ",matrix[e][min_p]);
            }
            else if (h == min_p){
                printf("%d ",matrix[e][max_p]);
            }
            else{
                printf("%d ",matrix[e][h]);
            }
        }
        printf("\n");
    }
    return 0;
}
    