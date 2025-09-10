#include <stdio.h>

int main(){
    int N,count = 0,g;
    int M[27] = {0};
    scanf("%d", &N);
    char mch[N+1];
    for (int k=0; k < N; k++){
        scanf(" %c",&mch[k]);
    }
    for (int i = 65; i <= 122; i++){
        
        for (int j = 0; j < N; j++){
            if(mch[j] == i){
                count++;
            }
        }
        g = i;{
        if (g <= 92){
            M[g-65] += count;
            }
        else{
            M[g-65-32] += count;
            }
        count = 0;
        }
    }

    for (int j = 0; j<26; j++) {
        printf("%d ",M[j]);
    }
    return 0;
}