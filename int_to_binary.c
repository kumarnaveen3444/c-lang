#include<stdio.h>
int main() {

	int arraysize=0;// declare and initialize/assign variable arraysize. This represent number of digit in binary
	int divident; // declare variable divident
	
	scanf("%d",&divident); // read divident
  	int originalNumber = divident; // copy value of divident into originalNumber


    while(divident/2!=0 ) { // expression true until divident/2!=0
    	divident=divident/2;  // assign/copy value of divident/2 into divident
    	arraysize++; // increase arraysize
    }
 
    arraysize++;  // increase arraysize to consider last digit of binary

    int reverseBinary[arraysize];  // delare array of size equal arraysize

   int index = 0;  // 

	divident = originalNumber;

    while(divident/2!=0) {
    	int reminder = divident%2; // reminder


    	reverseBinary[index] = reminder; // assign remainder at index
    	divident=divident/2; // assign/copy value of divident/2 into divident
    	index++; // increase index to store next bindar value
    }

    reverseBinary[index] = divident%2; // assign last reverseBinary value at index

	int binary[arraysize];
	int i=0;
	while(index>=0) {
		binary[i++] = reverseBinary[index--];
	}

int count=0;
int maxCount=0;
	for(int i=1 ; i<arraysize ; i++){

		if (binary[i]==0 && binary[i-1]==1){
			count=1;
		} else  if(binary[i]==0){
			count++;
		} else  if(binary[i]==1){
			if(maxCount<count){
				maxCount =count;
			}
		}
	}

	printf("%d\n", maxCount);
    return 0;
}
