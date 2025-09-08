#include <stdio.h>

int main(){
    int N,Sg=0,Sv=0;
    scanf("%d",&N);
    int matrix[N][N];
    for(int i=0; i<N;i++){
        for (int j=0; j<N;j++){
            scanf("%d",&matrix[i][j]);
            if (i+j >= N){
                Sv+=matrix[i][j];
            }
            if(i<j){
                Sg+=matrix[i][j];
            }
        }
    }
    if (Sv > Sg){
        printf("%d %d",Sg,Sv);
    }
    else{
        printf("%d %d",Sv,Sg);
    }
    return 0;
}