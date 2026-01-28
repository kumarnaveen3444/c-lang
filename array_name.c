# include<stdio.h>
int main(){
	char charname[6];

for(int i=0 ; i<6 ;i++){
	printf("enter letter %d\n", i);
	scanf("%c", &charname[i]);
	getchar();
}

printf("------------------\n");

for(int i=0 ; i<6 ;i++){
	printf(" %c", charname[i]);
}


return 0;
}