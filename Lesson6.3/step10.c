#include <stdio.h>
int main(void)
{
    int age;
    scanf("%d",&age);
    if (age >= 60){
        printf("пенсионер");
    }
    else if (age >=19)
    {
        printf("рабочий");
    }
    else if (age >=7)
    {
        printf("школьник");
    }
    else{
        printf("дошкольник");
    }

    return 0;
}