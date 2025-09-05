#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d",&A,&B);
    for (A; A<=B; A++){
        if (A > 0){
            for (int i = 1; i <= A; i++){
                printf("%4d",A);
            }
        }
    }

    return 0;
}