#include <stdio.h>
#include <string.h>

int main(){
    int n;
    char storona [10];
    int step;
    int x = 0;int y = 0;
    scanf("%d",&n);
    for (int i = 0; i < n; i++){
        scanf("%s",storona);
        scanf("%d", &step);
        if((strcmp(storona,  "North"))==0){
            y += step;
        }
        else if((strcmp(storona,  "South"))==0){
            y -= step;
        }
        else if((strcmp(storona,  "East"))==0){
            x += step;
        }
        else if((strcmp(storona,  "West"))==0){
            x -= step;
            // printf("W");
        }

    }
    printf("%d %d",x,y);


    return 0;
}