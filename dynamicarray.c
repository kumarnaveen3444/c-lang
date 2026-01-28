#include<stdio.h>
int main() {// main function

int noRow;// declare variable name noRow
int noColoum;// declare variable name noColoum
scanf("%d,%d",&noRow,&noColmn);//read no of row and coloum
int tiles[noRow][noColmn];// integer tiles of no of row and coloum
for(int raw=0 ; raw<noRow ; raw++){// for loop int raw=0 ;initilization  and raw<noRow ; is condition and raw++ is increase
	for(int coloum=0 ; coloum<noColmn ; coloum++){// for loop int coloum=0; is initilazation and coloum<noColmn ; is condition and coloum++ is increase
	scanf("%d",&tiles[raw][coloum]);// read tiles of row and coloum
	}
	printf("-----------\n");// go next line
}


// Print array values
for(int raw=0 ; raw<noRow ; raw++){

	for(int coloum=0 ; coloum<noColmn ; coloum++){

printf("%d     ",tiles[raw][coloum]);// printf tiles row and coloum 

	}
	printf("\n"); // go to next line
}
return 0;
}