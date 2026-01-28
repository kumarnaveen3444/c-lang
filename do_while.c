#include<stdio.h>

int main() {// main function

	int weekday;// declare variable weekday
    printf("Enter weekday : \n");// printf Enter weekday
    scanf("%d", &weekday);// read weekday
do {// in to printf is first and last is while condition
	switch (weekday) {
	    case 1: printf("Monday"); break;// when we enter 1 the compiler return monday
	    case 2: printf("Tuesday");break;
	    case 3: printf("wednessday");break;
		case 4: printf("thrusday");break;
	    case 5: printf("friday");break;
	    case 6: printf("saturday");break;
	    case 7: printf("monday");break;
	    default: printf("Exiting");
	}
	printf("\nEnter weekday : \n");//printf weekday and go to next line
    scanf("%d", &weekday);// read weekday
} while(weekday>0 && weekday<8);// condition of while when weekday>0 && weekday<8

	return 0;
}