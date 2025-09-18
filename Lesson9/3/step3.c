#include <stdio.h>
#include <string.h>

int main(){
    char name[28];
    char rash[6]; 
    scanf("%s",name);
    scanf("%s",rash);
    strcat(name, ".");
    strcat(name, rash);
    printf("%s",name);
    return 0;
}