#include<stdio.h>

int main() {// main fuction

	int yearday;//declare yearday
    printf("Enter 'yearday': \n");//printf yearday
    scanf("%d", &yearday);//read yearday
while(yearday>0 && yearday<21){//condition of while loop (yearday>0 && yearday<21)


	switch (yearday) {
	    case 1: printf("2001"); break;// in case 1: printf("yearday");and break;
	    case 2: printf("2002"); break;
	    case 3: printf("2003"); break;
		case 4: printf("2004"); break;
	    case 5: printf("2005"); break;
	    case 6: printf("2006"); break;
	    case 7: printf("2007"); break;
	    case 8: printf("2008"); break;
	    case 9: printf("2009"); break;
	    case 10: printf("2010"); break;
	    case 11: printf("2011"); break;
	    case 12: printf("2012"); break;
	    case 13: printf("2013"); break;
	    case 14: printf("2014"); break;
	    case 15: printf("2015"); break;
	    case 16: printf("2016"); break;
	    case 17: printf("2017"); break;
	    case 18: printf("2018"); break;
	    case 19: printf("2019"); break;
	    case 20: printf("2020"); break;
	   	default: printf("Exiting");//because  yearday<21 default value and exiting

	}
	printf("\nEnter yearday : \n");//printf yearday and go next line
    scanf("%d", & yearday);//read yearday

    
}

	return 0;
}