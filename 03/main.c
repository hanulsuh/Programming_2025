#include <stdio.h>

int main(void) {
	char c;
	char d;

	printf("enter a character : ");
	scanf("%c", &c);

	d = c + 1;

	printf("the next character of %c (%i) is %c (%i)\n", c, c,d, d);

	
	return 0;
}