#include<stdio.h>// inpput scanf and output printf 
int main(){ //main
int tiles[3][5]; //declare tiles
	tiles[0][0]=2;
	tiles[0][1]=4;
	tiles[0][2]=3;
	tiles[0][3]=2;
	tiles[0][4]=1;
	tiles[1][0]=2;
	tiles[1][1]=2;
	tiles[1][2]=2;
	tiles[1][3]=3;
	tiles[1][4]=3;
	tiles[2][0]=3;
	tiles[2][1]=3;
	tiles[1][2]=2;
	tiles[2][3]=2;
	tiles[2][4]=3;

for(int raw=0 ; raw<3 ; raw++){ //for loop for row and start o to 3 

	for(int coloum=0 ; coloum<5 ; coloum++){//for loop for coloum and start 0 to 5 

printf("%d",tiles[raw][coloum]);//print tiles[raw][coloum]

	}
	printf("\n");//next line 
}
return 0;
}