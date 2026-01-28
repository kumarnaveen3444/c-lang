#include<stdio.h>

int main() {//main function 

	int num;// declare num  
	scanf("%d",&num);//read number 
	for(int i=1 ; i<11 ; i++){// for loop condition int i=1 initilazation and i<11 condition i++ increase 
		printf("%d\n",i*num);//printf("%d\n",i*num)means %d is an intiger and i is num and i *num
	}
	return 0;
}