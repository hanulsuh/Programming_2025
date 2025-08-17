#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int number;
	int absolute_value;
	
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	absolute_value = (number < 0) ? -number : number;
	
	printf("%d\n", absolute_value);
	
	return 0;
}