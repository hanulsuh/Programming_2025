#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int number;
	
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	if (number > 0) {
		printf("%d\n", number);
	} else {
		printf("%d\n", -number);
	}
	
	return 0;
}