#include <stdio.h>

int main(void) {
    FILE *fp;
    char word[50];
    
    fp = fopen("sample.txt", "w");
    
    for (int i = 0; i < 3; i++) {
    	printf("Input a word : ");
    	scanf("%s", word);
    	fprintf(fp, "%s\n", word);
	}
	
	fclose(fp);
	
	return 0;
}

