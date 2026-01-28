# include<stdio.h>
int main() {
	
int A[4]={1,2,3,4};
int k=2;

int length = sizeof(A) /sizeof(A[0]);//to find array length


for(int move=1; move<=k; move++){//how many times move
	//printf("%d\n", k);
int tamp = A[length - 1];//tamp variable me store last value
	for(int i=length-1; i>0;i--){//move 1 time and last into change 1st	
	A[i]=A[i-1];
	}
	A[0]= tamp;// tamp variable ko 0 into zero
}

for (int i = 0; i < length; ++i)
{
	printf("%d  ", A[i]);// printA[i]
}

return 0; 
}




	