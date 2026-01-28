#include<stdio.h>
int main() {//main function
int num=0;//assign number
scanf("%d",&num);//read number
for(int i=5; i>num; i--){//iniotilazation int i=5; condition i>num; decrease  i--
	printf("%d\n",i);// print i
}
return 0;
}