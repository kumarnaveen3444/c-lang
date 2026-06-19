#include <stdio.h>

int main() {
    int num1;
    int num2;
    int gcd = 1;//gcd means = stands for Greatest Common Diviso
    //num1 and num2 also creates a slot called gcd and starts it at 1.
    
    printf("Enter two integers: ");
    
    scanf("%d %d", &num1, &num2);

    
    for (int i = 1; i <= num1 && i <= num2; i++) {
        
        if (num1 % i == 0 && num2 % i == 0) gcd = i;
    }
    
    printf("The LCM of %d and %d is %d\n", num1, num2, (num1 * num2) / gcd);

    return 0;
}