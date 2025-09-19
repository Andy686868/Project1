#include <stdio.h>

void sum_digirs(int *x);

int main(){
    int x;
    scanf("%d",&x);
    sum_digirs(&x);
    return 0;
}

void sum_digirs(int *x){
    int sum=0;
    while (*x>0)
    {
        sum += *x%10;
        *x /=10;
    }
    *x = sum;
    //printf("%d",sum);
    
}