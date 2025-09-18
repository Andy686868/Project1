#include <stdio.h>

int main() {
    char str[53];
    int i = 0;
    
    fgets(str, 53, stdin);
    
    while (str[i] != '\0' && str[i] != '\n') {
        while (str[i] == ' ') {
            i++;
        }
        if (str[i] == '\0' || str[i] == '\n') break;
        
        int start = i; 
        
        while (str[i] != ' ' && str[i] != '\0' && str[i] != '\n') {
            i++;
        }
        int end = i; 
        for (int j = end - 1; j >= start; j--) {
            printf("%c", str[j]);
        }
        if (str[i] == ' ') {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}