# include<stdio.h>
int main() {//main function
	int A[7]={9,3,9,3,9,7,9};//decleare value
	int element;//different size element
	for(int b=0; b<7; b++){//initilazation b=0; and condition b<7; increase b++
		int size=1;//9 is the size 1 because 
		for(int j=0; j<7; j++){
if(b!=j && A[b]==A[j]){// in b 9!= 9j	&& A[3]==A[3] size++
	size++;//count how many times a number is repit
	}
	}
	if (size %2!=0){// if size %2!=0 is unpaired
		element =A[b];//

	}
	}
	printf("%d",element);//printf element
	return 0 ;
	} 