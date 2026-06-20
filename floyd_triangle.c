#include <stdio.h>

int main() {
    
    int rows;
    int n = 1;
    
    printf("Enter the rows: ");
    
    scanf("%d", &rows);

    for (int i = 1; i <= rows; i++) {
        
        for (int j = 1; j <= i; j++) {
            
            printf("%d ", n++);
        }
        
        printf("\n");
    }
    return 0;
}