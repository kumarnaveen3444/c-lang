#include<stdio.h>

int main() {//main function 

	int num;//declare num
    printf("Enter a number : \n");// print number 
    scanf("%d", &num);// read integer number 

    if(num%2 == 0){// condition num%2 == 0
    	printf("%d  is an Even number", num);// when  num%2 == 0 printf("%d  is an Even number"
    } else {
		printf("%d  is an Odd number", num);//when  num%2 != 0 printf("%d  is an Odd number"
    }

	return 0;
}