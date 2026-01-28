#include <stdio.h>

int sum(int x, int y)// declear two number x and y 
{
    return x+y;// sum two number 
}

int multiply(int x, int y)// declear two number x and y 
{
    return x*y;// muitaply two number x*y
}

int main()// main function 
{
    printf("%d\n",sum(3,9));// printf sum of two number 3 and 9
    printf("%d\n",multiply(3,9));//printf muitaply of two number 3 and 9
    return 0;
}

