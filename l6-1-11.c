#include <stdio.h>
int main(void)
{
    char pol;
    int age, height, weight;
    double bmr_male, bmr_female;
    scanf("%c %d %d %d", &pol, &age, &height, &weight);
    switch(pol){
        case 'm':
            bmr_male = 10*weight + 6.25*height - 5*age + 5;
            printf("|  BMR  |\n");
            printf("|%7.2f|\n", bmr_male);
            break;
        case 'f':
            bmr_female = 10*weight + 6.25*height - 5*age - 161;
            printf("|  BMR  |\n");
            printf("|%7.2f|\n", bmr_female);  
            break;         
        default:
            printf("ERROR!");
            break;
    }

    return 0;
}