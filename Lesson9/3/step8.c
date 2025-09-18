#include <stdio.h>
#include <string.h>

int main(){
    char str1[53];
    char str2[53];
    char str3[53];
    char str4[53];
    scanf("%s",str1);
    scanf("%s",str2);
    int count = 0;
    int flag = 0;
    int g = 0,f = 0;
    
    while (str2[count]!='\0')
    {
        if(strchr(str1,str2[count])== NULL){
            flag = 1;
        }
        count++;
    }
    for (int i = 0; i< count;i++){
        for (int j = 0 ; j < count;j++){
            if(str2[i] == str2[j]) {
                g += 1;
            }
        }
        str3[i]=g;
        g = 0;
    }
    for (int i = 0; i< count;i++){
        for (int j = 0 ; j < strlen(str1);j++){
            if(str2[i] == str1[j]) {
                f += 1;
            }
        }
        str4[i]=f;
        f = 0;
    }
    for(int i = 0; i< count; i ++){

        if (str3[i] > str4[i]){
            flag += 1;
        }
    }
    int result = strcmp(str3,str4);

    if (flag==0 ){
        printf("yes");
    }
    else{
        printf("no");
    }
    return 0;
}