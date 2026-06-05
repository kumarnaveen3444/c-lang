#include <stdio.h>

int main() {
    char c = 'A'; 

    int rows = 7;  

    for (int i = 1; i <= rows; i++) {

        for (int j = 1; j <= i; j++) {

           if (c <= 'Z') {

              printf("%c ", c);

              c++; // Move to the next letter
            }
        }
        printf("\n"); 
    }

    return 0;
}