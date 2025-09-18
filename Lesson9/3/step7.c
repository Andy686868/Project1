#include <stdio.h>

int main(){
    char N[10];
    scanf("%s",N);
    int sum = 0;
    for (int i = 0; i<3; i++){
        sum+=N[i];
    }
    for(int j = 3; j < 6; j++){
        sum-=N[j];
    }
    if (sum==0){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}