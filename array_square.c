# include<stdio.h>
int main() {
	int number[5];
	for(int i=0 ; i<5 ; i++){
		scanf("%d",&number[i]);
	}
	printf("------\n");
	for(int i=0 ; i<5 ; i++){
	 
	
	printf("%d\n",number[i]*number[i]);
}
	return 0;
}