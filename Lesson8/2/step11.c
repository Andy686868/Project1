#include <stdio.h>

int main(){
    int N, M, s = 1, g;
    
    scanf("%d %d", &N, &M);
    int matrix[N][M];
    
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            matrix[i][j] = 0;
        }
    }
    
    if(N < M){
        g = N;
    }
    else{
        g = M;
    }
    if(g % 2 == 0){
        g = g / 2;
    }
    else{
        g = g / 2 + 1;
    }
    
    for(int k = 0; k < g; k++){
        for(int c = k; c < M - k; c++){
            if(matrix[k][c] == 0) { 
                matrix[k][c] = s;
                s++;
            }
        } 
        
        for(int d = k + 1; d < N - k; d++){
            if(matrix[d][M - 1 - k] == 0) {
                matrix[d][M - 1 - k] = s;
                s++;
            }
        }
        
        if(k < N - 1 - k) {
            for(int e = M - 2 - k; e >= k; e--){
                if(matrix[N - 1 - k][e] == 0) {
                    matrix[N - 1 - k][e] = s;
                    s++;
                }
            }
        }
        
        if(k < M - 1 - k) {
            for(int f = N - 2 - k; f > k; f--){
                if(matrix[f][k] == 0) {
                    matrix[f][k] = s;
                    s++;
                }
            }
        }
    }
    
    for(int a = 0; a < N; a++){
        for(int b = 0; b < M; b++){
            printf("%3d ", matrix[a][b]);
        }
        printf("\n");
    }
    
    return 0;
}