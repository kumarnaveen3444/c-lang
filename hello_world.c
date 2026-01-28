#include <stdio.h>
int age = 18;

int getAge()
{
    return 15.67;
}
int getCurrentAge()
{
    return age;
}

int getNewAge()
{
    return age;
}

int main()
{
    printf("Hello World.......\n");
    printf("global age %d\n", age);
    printf("local age  %d", getAge());
    return 0;
}

