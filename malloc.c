#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int size;
	puts("enter your int array size...");
	scanf("%d",&size);
	printf("size : %d\n",size);

	int* ptr = (int*)malloc(sizeof(int)*size);
	
	int i=0;
	for(i=0;i<size;i++){
		*(ptr+i)=i;	
	}
	
	for(i=0;i<size;i++){
		printf("%d ",*(ptr+i));
	}
	
	puts("\n");
	
	for(i=0;i<size;i++){
		ptr[i]=i;
	}
	
	for(i=0;i<size;i++){
		printf("%d ",ptr[i]);	
	}
	
	

	free(ptr);
	return 0;
}
