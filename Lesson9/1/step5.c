#include <stdio.h>

int main(){
    int N,count = 0;
    char ch;
    
    scanf("%d", &N);
        for (int i = 0 ; i < N; i++){
            scanf("%c",&ch);
            printf("%d ",ch);
            for (int m = 0 ; m < 27; m++){
                m = m + 65;
                if (ch == m || ch == m + 22){
                count ++;
                //printf("%d",m);
            }
       }
    } 
    
        return 0;
}