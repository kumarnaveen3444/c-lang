# include<stdio.h>
int main() {
	int number[5];
	int total=0;


for(int i=0 ; i<6 ;i++){
	printf("Please enter number %d", i);
	scanf("%d", &number[i]);
}
printf("------------------\n");
for(int i=0 ; i<6 ;i++){
	total = total+number[i]*number[i];
}

printf("%d\n", total);
return 0;
}



 