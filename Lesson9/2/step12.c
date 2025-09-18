#include <stdio.h>

int main(){
    char str[53];
    int count = 0;
    int fr = 0;
    int sc = 0;
    char c;
    fgets(str,53,stdin);
    while (str[count] != '\0' ){//|| str[count]!='\n'){
        c = str[count];
        //printf("%c\n",str[count]);
        fr = count;

        while (!(str[fr]=='\0' || str[fr]==' ' || str[fr]=='\n'))
        {
            fr++;
        }
        fr--;
        if(str[fr] == str[count] && fr != count){
            printf("%c=%d - %d\n",str[fr],count,fr);
            while (count < fr){
                printf("%c",str[count]);
                count++;
            }
            printf(" ");
        }
        count++;

        

        
    }
}
/*
#include <stdio.h>

int main(){
    char N[53];
    char M[53];
    fgets(M,53,stdin);
 
    {

    }
    
    while (scanf("%s",N)==1)
    {
        if (N[0] == N[-1]){
            printf("%s",N);
        }
    }

    return 0;
    
}*/