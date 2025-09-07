#include <stdio.h>
int main(void)
{
    int N, max, min, a=0,b=0;
    scanf("%d",&N);
    int mat[N];
    scanf("%d",&mat[0]);
    max = min = mat[0];
    for(int i=1; i<N;i++){
        scanf("%d",&mat[i]);
        if (mat[i]> max){
            max = mat[i];
            a = i;
        }
        if (mat[i]< min){
            min = mat[i];
            b = i;
        }
    }
    for(int j = 0; j<N; j++){
        if(mat[j]==max){
            printf("%d ",min);
        }
        else if (mat[j]== min){
            printf("%d ",max);
        }
        else{
            printf("%d ",mat[j]);
        }
    }
    return 0;
}