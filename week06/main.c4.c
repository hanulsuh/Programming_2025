#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int number;
	int sum = 0;
	int i;
	
	printf("Enter a number : ");
	scanf("%d", &number);
	
	for(i = 1; i <= number; i++) {
		sum = sum + i;
	}
	
	printf("The result is %d\n", sum);
	
	return 0;
}