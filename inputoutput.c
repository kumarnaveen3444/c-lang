#include <stdio.h>

int main() {//main function 
    int roll_num;// declare roll number 
    char name[100];//declare name
    printf("Enter roll number : \n");// print roll number 
    scanf("%d", &roll_num);// read number 
    
    printf("Enter name : \n");// print name 
    scanf("%s", name);// read name and string 

    // printing output using printf
   

        printf("Roll Number is %d\n", roll_num);// print roll number and next line 
        printf("Your name is %s", name);// print name into string 

    return 0;
}