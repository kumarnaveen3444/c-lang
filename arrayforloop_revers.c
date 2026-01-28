 # include<stdio.h>
int main(){ // main function 
	char name[5];// declare name array

for(int i=0 ; i<5 ;i++){// in for loop int i=0 ;is initilazation and i<5 ;is condition and i++ is increase
	printf("Please enter number %d\n", i);//print integer number in i
	scanf("%c", &name[i]);// read char and assign at location i in name array
	getchar();
}
printf("------------------\n");// go next line
for(int i=5 ; i>0 ;i--){//in for loop int i=5 ;is initilazation and i>0 ;is condition and i-- is decrease
	printf("%c",name[i]);//%c indicate char and printf char at location i in name array
}
return 0;
}