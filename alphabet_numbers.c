#include <stdio.h>
#include <ctype.h> // For isalpha() and toupper()

int main() {
    char ch;
    int position;

    printf("Enter an alphabet: ");
    scanf(" %c", &ch);

    if (isalpha(ch)) {
    
        char upperCh = toupper(ch);
        
    
        position = upperCh - 'A' + 1;

        printf("The position of '%c' in the alphabet is: %d\n", ch, position);
    } else {
        printf("Error: '%c' is not an alphabet.\n", ch);
    }

    return 0;
}