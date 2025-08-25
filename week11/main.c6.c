#include <stdio.h>
 
void main(void) {
	FILE *fp = NULL;
	char c;
	
	fp = fopen("sample.txt", "r");
	
	if (fp == NULL) {
		printf("Can't open file\n");
	}	
	
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	
	fclose(fp);
}