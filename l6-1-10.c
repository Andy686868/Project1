#include <stdio.h>
#include <math.h>

int main(void){
    char c;
    double num1, num2;
    int num3;
    scanf("%lf %c %lf",&num1, &c, &num2);
    num3=(int)num2;
    switch(c){
        case '+':
            printf("%.2lf",num1+num2);
            break;
        case '-':
            printf("%.2lf",num1-num2);
            break;
        case '*':
        case 'x':
            printf("%.2lf",num1*num2);
            break;
        case '/':
        case ':':
            switch (num3){
                case 0:
                    printf("ERROR!");
                    break;           
                default:
                    printf("%.2lf",num1/num2);
                    break;
                    }
                    break;
        case '^':
            printf("%.2lf",pow(num1,num2));
            break;
        default:
                printf("ERROR!");
                break;
    }
    return 0;   
}