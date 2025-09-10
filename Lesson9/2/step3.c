/*#include <stdio.h>

int main(){
    int c;
    int count = 0, flag = 1;
    while ((c = getchar())!='\n' && c != '\0'){
        if (c != ' '){
            if (flag == 1){
                count++;
                flag += 1;
            } 
        }
        else {
            flag = 1;
        }
    }
    printf("%d", count);
    return 0;
    
}

#include <stdio.h>

int main(){
    char ch[101];
    int count = 1;
    fgetc(ch);
    while (ch[count]!='\n')
    {
        scanf("%s",&ch);
        count++;
    }
    printf("%d",count);
    return 0;
}*/
#include <stdio.h>

int main() {
    int n = 0, i = 0;
    char str[100];
    gets(str);
    while(str[i] != '\0'){
         if(i==0 && str[i] != ' ') n++;
         else if (str[i] == ' ' && str[i] != str[i+1] && str[i+1] != '\0') n++;
         i+=1;     
     }
    printf("%d", n);
    return 0;
}