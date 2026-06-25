#include <stdio.h>

int main() {
    
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter);

    
    if (letter == 'n') {
        
        printf("naveen\n");
        
    } else {
        printf("You are not naveen \n");
        
    }

    return 0;
}