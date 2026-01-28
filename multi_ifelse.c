#include<stdio.h>

int main() {// main function 

	int weakday;// weekday declare
    printf("Enter a weakday : \n");//print weekday  
    scanf("%d", &weakday);// read weekday 

    if(weakday == 1 ){// if weakday == 1 when  print monday  
    	printf("monday");
    }  
    else if(weakday == 2 ){//otherwise print(weakday == 2  
		printf("tuesday");
    }
    else if(weakday == 3 ){
        printf("thursday");
}
else if(weakday == 4 ){
        printf("wednesday");
}
else if(weakday == 5 ){
        printf("friday");
}
else if(weakday == 6 ){
        printf("saturday");
}
else if(weakday == 7 ){
        printf("sunday");
}
else { printf ("invelide num");// default and invelide num 
}
	return 0;
}

