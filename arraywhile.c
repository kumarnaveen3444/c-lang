#include<stdio.h>
int main() {

	int arraysize=0;
	int divident;
	
	scanf("%d",&divident);
  	int originalNumber = divident;


    while(divident/2!=0 ) {
    	divident=divident/2; 
    	arraysize++;
    }
 
    arraysize++;

    int binary[arraysize];

   int index = 0;

	divident = originalNumber;

    while(divident/2!=0) {
    	binary[index] = divident%2;
    	divident=divident/2;
    	index++;
    }

    binary[index] = divident%2;

	while(index>=0){
		printf("%d  ", binary[index--]);
	}

    return 0;
}