#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int num1, num2;
	char op;
	
	printf("Enter the calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	switch (op) {
		case '+' :
			printf("= %d\n", num1 + num2);
			break;
		case '-' :
			printf("= %d\n", num1 - num2);
			break;
	    case '*' :
			printf("= %d\n", num1 * num2);
			break;
		case '/' :
			printf("= %d\n", num1 / num2);
			break;
	}
	
	return 0;
}