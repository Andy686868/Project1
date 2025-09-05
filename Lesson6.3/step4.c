#include <stdio.h>
int main(void)
{
    int A, B;
    scanf("%d %d",&A,&B);
    if ((A <= B) && (B != 0)){ printf ("yes");}
    else{
        printf("no");
    }
    return 0;
}