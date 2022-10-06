#include <stdio.h>

int main(void){
	
	FILE* fp1; //declare FILE pointer fp
	FILE* fp2;
	
	fp1 = fopen("existFile.txt","rt");
	fp2 = fopen("nonExistFile.txt","rt");


	if(fp1==NULL) puts("fp1==NULL");
	else puts("fp1!=NULL");
	
	if(fp2==NULL) puts("fp2==NULL");
	else puts("fp2!=NULL");
	
	//if Read Mode, File doesnt exist, FILE pointer is NULL
	
	fclose(fp1);
	fclose(fp2);
	
	return 0;
	
}
