#include <stdio.h>
#include <math.h>

int main(){
    char str[21];
    int count = 0,step, sum = 0, count2 = 0;


    fgets(str, 101, stdin);
    while (str[count] != '\0'){
        count++; 
    }
    for (int i = count - 2; i >=0 ; i--){
        step = str[i]-'0';
        sum += step * pow(2,count2);
        count2 ++;
    }

    printf("%d",sum);
}