#include <stdio.h>

int main(void) {
	char input_char;
	char next_char;
	
	printf("enter a character : ");
	scanf("%c", &input_char);
	
	next_char = input_char + 1;
	
	printf("the next character of %c (%i) is %c (%i)", input_char, input_char, next_char, next_char);
		
	return 0;
}