#include<stdio.h>

int main() {//main function

	int monthday;//declare monthday
    printf("Enter 'Monthday': \n");//printf monrthday
    scanf("%d", &monthday);//read monthday
while(monthday>0 && monthday<13){//condition of while loop monthday>0 && monthday<13


	switch (monthday) {
	    case 1: printf("january"); break;//when we enter 1 the return me to january and break
	    case 2: printf("february");break;
	    case 3: printf("march");break;
		case 4: printf("april");break;
	    case 5: printf("may");break;
	    case 6: printf("june");break;
	    case 7: printf("july");break;
	    case 8: printf("august"); break;
	    case 9: printf("september"); break;
	    case 10: printf("october"); break;
	    case 11: printf("november"); break;
	    case 12: printf("december"); break;
	    default: printf("Exiting");

	}
	printf("\nEnter monthday : \n");//printf monthday and go to next line
    scanf("%d", & monthday);//read monthday

    
}

	return 0;
}