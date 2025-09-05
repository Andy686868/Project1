#include <stdio.h>

int main(){
    int d1,d2,d3,m;
    scanf("%d %d %d %d",&d1,&d2, &d3, &m);
    switch (m){
        case 0:
            printf("%d %d %d",d1 ,d2 ,d3);
            break;
        case 1:
            printf("1 1 1");
            break;
        case -1:
            printf("0 0 0");
            break;
        default:
            break;
    }
    return 0;
}