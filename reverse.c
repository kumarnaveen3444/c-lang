#include <stdio.h>

int main() {
   
    void reverseSentence();
    printf("please Enter a sentence: ");
    
    reverseSentence();
    
    return 0;
}

void reverseSentence() {
    char c;
    
    scanf("%c", &c);
    
    if (c != '\n') {
        
        reverseSentence();
        printf(" %c ", c);
    }
}