#include<stdio.h>

int main() {// main function 

	int num =0;// assign number 

    printf("num %d\n", num);//print number 
    printf("Enter a number 1 to 100 : \n");//print num 1 to 100  
    scanf("%d", &num);//read number 
while(num>0 && num<100){// while condition when num>0 && num<100
       if(num%2 == 0){//if number divide by 2 and == 0 
        printf("%d  is an Even number\n", num);// num%2 == 0 printf("%d  is an Even number\n", num)
    } else {
        printf("%d  is a Odd number\n", num);//(num%2 ! == 0 printf("%d  is a Odd number\n", num)
    }
     printf("Enter a number 1 to 100 : \n");//print num  number 1 to 100 
    scanf("%d", &num);//read num
}

	return 0;
}