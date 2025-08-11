#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	int num1, num2;
	
	printf("Input two integers : ");
	scanf("%i %i", &num1, &num2);
	
	printf("+ result is %d\n", num1 + num2);
	printf("- result is %d\n", num1 - num2);
	printf("* result is %d\n", num1 * num2);
	printf("/ result is %d\n", num1 / num2);
	printf("%% result is %d\n", num1 % num2);
	
	return 0;
}