#include<stdio.h> 
int main() {// main function 
int num; // declare number
scanf("%d",&num);// read number 
for(int i=1 ; i<num ; i++){// initilazation and condition and increament 
for(int j=1 ; j<11 ; j++){//initilazation and condition and increament 
	printf("%d\n", i*j);// print integer and muitaply i*j 
}
printf("----------\n");// next line 
}
	return 0;
}