# include<stdio.h>
int main(){
	int rollNumber[5];

for(int i=0 ; i<5 ;i++){
	printf("Please enter number %d\n", i);
	scanf("%d", &rollNumber[i]);
}


printf("------------------\n");

for(int i=0 ; i<5 ;i++){
	printf(" %d\n", rollNumber[i]);
}

return 0;
}