#include<stdio.h>

int main() {//main function

	int number;//declare number
    printf("Enter Number: \n");//printf number
    scanf("%d", &number); //read number

//Without body only one instruction that is immediate after for loop execute
//for (int i = 0; i < number; i++) printf("%d  ", i); printf("hello \n");


	for (int i = 0; i < number; i++) {//condition of for loop initilazation int i = 0;condition i < number;increase i++
		printf("%d  ", i);//print i
		printf("hello \n");// go to next line
	}

	return 0;
}