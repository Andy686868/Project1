#include <stdio.h>
int main(void)
{
    char c;
    double num1, num2;
    scanf("%c %lf %lf",&c, &num1, &num2);
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
            printf("%.2lf",num1/num2);
            break;
        default:
            break;
    }
    return 0;
}

#include <stdio.h>
int main(void)
{
    char c;
    double num1, num2;
    scanf("%c %lf %lf",&c, &num1, &num2);
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
            printf("%.2lf",num1/num2);
            break;
        default:
            printf("ERROR!");
            break;
    }
    return 0;
}


