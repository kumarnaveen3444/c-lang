# include<stdio.h>
int main(){
	char firstname[8],lastname[5];
for(int i=0 ; i<8 ;i++){
	printf("enter letter of first name %d\n", i);
	scanf("%c", &firstname[i]);
	getchar();
}
for(int i=0 ; i<5 ;i++){
	printf("enter letter of last name  %d\n", i);
	scanf("%c",&lastname[i]);
	getchar();
}
printf("------------------\n");

for(int i=0 ; i<8 ;i++){
	printf(" %c", firstname[i]);
}
printf("  ");

for(int i=0 ; i<5 ;i++){
	printf(" %c",lastname[i]);
}
return 0;
}