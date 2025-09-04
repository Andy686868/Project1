#include <stdio.h>


int main(void)
{

    char s;  
    scanf("%c",&s);

    switch (s) {
        case 'f' : 
            printf("и себя, и коня потеряешь!\n");break;
        case 'l' : 
            printf("коня потеряешь, себя спасёшь!\n"); break; 
        case 'r' : 
            printf("себя потеряешь, коня спасёшь!\n"); break;
        default:
            printf("");
    }

    return 0;
}