# include<stdio.h>
int main() {
	int number[5];
	int square[5];
	for(int i=0 ; i<5 ; i++){
		scanf("%d",&number[i]);
	}
	
	for(int i=0 ; i<5 ; i++)
	{
		square[i] = number[i]*number[i];
	 }
for(int i=0 ; i<5 ; i++){	
	printf("%d\n",square[i]);
}
	return 0;
}
	