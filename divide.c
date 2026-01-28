#include <stdio.h>
int divide(int x, int y)// declear function name divide with two parameters of type int x and int y 
{
    return x/y;// divide two number x/y
}

int main()// main function. Entry point of program
{
    printf("divide %d\n",divide(9,3));// printf retrun value of function divide. We pass two parameter 9 and 3 

    printf("divide %d\n",divide(15,3));

    printf("divide %d\n",divide(12,3));

    printf("divide %d\n",divide(15,5));

    printf("divide %d\n",divide(30,10));
    return 0;
}

