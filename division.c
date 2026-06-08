#include <stdio.h>
int main() {
    
    int dividend;
    int divisor;
    int quotient;
    int remainder;
    
    printf("Enter dividend: ");
    scanf("%d", &dividend);
    printf("Enter divisor: ");
    scanf("%d", &divisor);

    quotient = dividend / divisor;
    
    printf("Quotient = %d\n", quotient);
    
    remainder = dividend % divisor;
    
    printf("Remainder = %d ", remainder);
    
    return 0;
}