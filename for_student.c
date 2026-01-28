#include<stdio.h>

int main() {// main function

	int student;//declear student
    printf("Enter student: \n");//printf Enter student
    scanf("%d", &student);//read student
while(student>0 && student<=41){// condition of while (student>0 && student<=41) 


	switch (student) {
	    case 1: printf("ram"); break;//when we enter 1 compile printf("ram"); break; and stop
	    case 2: printf("naveen kumar yadav"); break;
	    case 3: printf("neeraj"); break;
		case 4: printf("puspha raj"); break;
	    case 5: printf("sita"); break;
	    case 6: printf("monika"); break;
	    case 7: printf("manoj"); break;
	    case 8: printf("rahul"); break;
	    case 9: printf("deepesh"); break;
	    case 10: printf("kran"); break;
	    case 11: printf("sandeep"); break;
	    case 12: printf("sanjiv"); break;
	    case 13: printf("himanshu"); break;
	    case 14: printf("kalpesh"); break;
	    case 15: printf("sameer"); break;
	    case 16: printf("sunil"); break;
	    case 17: printf("jaheer"); break;
	    case 18: printf("karishna"); break;
	    case 19: printf("kavika"); break;
	    case 20: printf("pooja"); break;
	    case 31: printf("aarti"); break;
	    case 32: printf("shyam"); break;
	    case 33: printf("nilam"); break;
		case 34: printf("nikita"); break;
	    case 35: printf("manshi"); break;
	    case 36: printf("ritika"); break;
	    case 37: printf("simiren"); break;
	    case 38: printf("ekta"); break;
	    case 39: printf("naveenta"); break;
	    case 40: printf("mahak"); break;
	    case 41: printf("devender"); break;
	   	default: printf("Exiting");

	}
	printf("\nEnter student : \n");//printf student and go next line
    scanf("%d", &student);//read student
    
}

	return 0;
}