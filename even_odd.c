#include<stdio.h>

int main() { 

	int num =0;
    
    printf("Enter a number : \n"); 
    
    scanf("%d", &num);
    
while(num>0 && num<100){
    
       if(num % 2 == 0)
       {
           
        printf("%d  Even number\n", num);
    } else {
        
        printf("%d  Odd number\n", num);
    }
     printf("Enter a number : \n");
     
    scanf("%d", &num);
}

	return 0;
}