#include <stdio.h>

int main() {
    char str[102];
    int i = 0;
    fgets(str, 102, stdin);
    
    while (str[i] != '\0') {
        if (str[i] == '/' && str[i + 1] == '*') {
            int start = i;
            i += 2; 
            

            int found_end = 0;
            while (str[i] != '\0') {
                if (str[i] == '*' && str[i + 1] == '/') {
                    i += 2;
                    found_end = 1;
                    break;
                }
                i++;
            }
            
            if (!found_end) {
                i = start;
                printf("%c", str[i]);
                i++;
            }
        } else {
            printf("%c", str[i]);
            i++;
        }
    }
    
    return 0;
}