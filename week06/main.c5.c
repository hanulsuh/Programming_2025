/* 두 개의 정수와 연산자를 입력 받아 계산 값을 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int num1, num2; // 입력받은 두 개의 정수를 저장할 변수
	char op; // 입력받은 연산자를 저장할 변수
	
	// 두 개의 정수와 연산자를 입력받기
	printf("Enter the calculation : ");
	scanf("%d %c %d", &num1, &op, &num2);
	
	// 연산자에 따라 계산한 결과값을 출력하기
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