#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int num1, num2;
	
	printf("Input two integers : ");
	scanf("%i %i", &num1, &num2);
	
	printf("& result is %d\n", num1 & num2);
	printf("| result is %d\n", num1 | num2);
	printf("^ result is %d\n", num1 ^ num2);
	printf("<<1 result is %d\n", num1 <<1 );
	printf(">>1 result is %d\n", num1 >>1 );
	
	return 0;
}