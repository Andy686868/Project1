#include <stdio.h>

int printer(int N, char ch);

int main(){
    int N;
    char ch;
    scanf("%d %c",&N,&ch);
    printer(N,ch);
    return 0;
}

int printer(int N, char ch){
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            printf("%c",ch);
        }
        printf("\n");
    }
}