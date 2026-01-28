#include<stdio.h>
int main() {// main function 
int num;// declear integer num 
scanf("%d",&num);//read number 
for(int i=1 ; i<num ; i++){// initilazation and condition and increase 
for(int j=1 ; j<11 ; j++){//initilazation and condition and increase 
	printf("%d\n", i*j);// print intiger num and muiltaply i*j
}
printf("----------\n");// next line 
}
	return 0;
}