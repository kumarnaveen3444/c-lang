#include <stdio.h>
#include <string.h>

int main() {
    
    char str[] = "naveen"; 
    int len = strlen(str);

    printf("Original: %s\n", str);
    printf("Reversed: ");
    
    for (int i = len - 1; i >= 0; i--) {
        
        printf("%c", str[i]); 
    }
    return 0;
}
