#include <stdio.h>

int negative(int x, int y)// we declear to integer x and y
{
	return x-y;// condition x-y 
}

int main(){// main function 
	printf("negative   %d\n",negative(8,4));//print int and next line negative (8-4)
	return 0;
}
