#include <stdio.h>

int main(){
    int N,Sg=1,Sv=1;
    scanf("%d",&N);
    int matrix[N][N];
    for(int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            scanf("%d",&matrix[i][j]);
            if (i==j){
                Sg*=matrix[i][j];
            }
            if (i+j==N-1){
                Sv*=matrix[i][j];
            }
        }
    }
    if (Sv > Sg){
        printf("%d %d",Sv, Sg);
    }
    else{
        printf("%d %d",Sg, Sv);
    }
    return 0;
}