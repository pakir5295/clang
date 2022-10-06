#include <stdio.h>

int main(void){
	
	FILE* fp; //declare FILE pointer fp
	
	fp = fopen("newFile.txt","wt"); // create file "newFile" with write_text mode
	
	fprintf(fp,"Hello World!! number is %d...",20);
	
	fclose(fp);
	
	return 0;
	
}
