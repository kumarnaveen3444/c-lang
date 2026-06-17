#include <stdio.h>
int main() {
    int num;
    int i;
    
    printf("Enter positive integer: ");
    
    scanf("%d", &num);
    
    printf("Factors \n%d: ", num);
    
    for (int i = 1; i <= num; ++i) {
        
        if (num % i == 0) {
            
            printf("%d\n ", i);
        }
    }
    return 0;
}