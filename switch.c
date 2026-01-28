#include<stdio.h>

int main() {//main function 

	int weekday; // weekday declare 
    printf("Enter weekday : \n");//print and next line  
    scanf("%d", &weekday);// read weekday 


	switch (weekday) {
	    case 1: printf("Monday"); break;// when we enter case 1 so print and break  case 1: printf("Monday"); break;
	    case 2: printf("Tuesday");break;
	    case 3: printf("wednessday");break;
		case 4: printf("thrusday");break;
	    case 5: printf("friday");break;
	    case 6: printf("saturday");break;
	    case 7: printf("sunday");break;
	    default: printf("Exiting");//default means a num is default and exiting 
	return 0;
}