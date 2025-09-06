#include <stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d",&a, &b);
    if (a>=b){
        c = a;
        for (int i = a; i%b != i%a;i++){
            c = i+1;
        }
    }
    else{
        c = b;
        for (int i = b; i%b != i%a ;i++){
            c = i+1;
        }

    }
    printf("%d",c);
    return 0;
}