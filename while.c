#include<stdio.h>

int main() {// main function  

	int weekday;// declare 
    printf("Enter weekday : \n");//print weekday and goes to next 
    scanf("%d", &weekday);//print weekday 
while(weekday>0 && weekday<8) {//condition when weekday>0 && weekday<8


	switch (weekday) {
	    case 1: printf("Monday"); break;// when casev 1:  printf("Monday");and break;next line
	    case 2: printf("Tuesday");break;
	    case 3: printf("wednessday");break;
		case 4: printf("thrusday");break;
	    case 5: printf("friday");break;
	    case 6: printf("saturday");break;
	    case 7: printf("sunday");break;
	    default: printf("Exiting");// defautl means loop is over and exeting 
	}
	printf("\nEnter weekday : \n");//print weekday and goes to next 
    scanf("%d", &weekday);//print weekday 

    
}

	return 0;
}