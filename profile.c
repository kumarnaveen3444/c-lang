#include <stdio.h>

int main() {
    
    char name[ 20 ];
    int age;
    int year;

    printf("Enter your name is: ");
    scanf("%s", name); 

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your current year: ");
    scanf("%d", &year);

    printf("\n--- my Profile ---\n");
    printf("Name: %s\n", name);
    printf("Age: %d years old\n", age);
    printf("Year: %d\n", year);

    return 0;
}