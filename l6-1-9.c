#include <stdio.h>
int main(void){
    char c;
    double num1, num2;
    int num3;
    scanf("%lf %lf %c",&num1, &num2, &c);
    num3=(int)num2;
    switch(c){
        case '+':
            printf("%.2lf",num1+num2);
                break;
        case '-':
            printf("%.2lf",num1-num2);
                break;
        case '*':
            printf("%.2lf",num1*num2);
                break;
        case '/':
            switch (num3){
                case 0:
                    printf("ERROR!");
                    break;           
                default:
                    printf("%.2lf",num1/num2);
                    break;
                    }
                    break;
        default:
                printf("ERROR!");
                break;
    }
    return 0;   
}