#include <stdio.h>

int main(){
    int n,count = 0,count_p;
    scanf("%d",&n);
    count_p =n;
    while (n != -9999)
    {
        if (n < 0){
            count += 1;
        }
        scanf("%d",&n);
    }
    if (count == 0 && count_p != -9999){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
    
}