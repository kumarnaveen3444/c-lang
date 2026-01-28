#include<stdio.h>
int main() {//main function 

	
int tiles[3][5];//declare int 
for(int raw=0 ; raw<3 ; raw++){ 
	for(int coloum=0 ; coloum<5 ; coloum++){
	scanf("%d",&tiles[raw][coloum]);
	}
	printf("-----------\n");
}

for(int raw=0 ; raw<3 ; raw++){

	for(int coloum=0 ; coloum<5 ; coloum++){

printf("%d     ",tiles[raw][coloum]);

	}
	printf("\n");
}
return 0;
}