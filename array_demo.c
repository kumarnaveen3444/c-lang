 # include<stdio.h>
int main(){
	//int Number[5] = {6,4,8,9,2};
	int Number[5];
	for(int i=0 ; i<5 ; i++){
		scanf("%d",&Number[i]);
	}
	//printf("%d", number)
	for(int i=4 ; i>=0; i--){
	printf("%d\n",Number[i]);	
	}

printf("-------------");
	int total_size = sizeof(Number);
	int oneElementSize = sizeof(Number[0]);
	printf("%d", total_size);
	printf("size of array %d",total_size/oneElementSize);


return 0;
}