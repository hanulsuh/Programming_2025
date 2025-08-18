/* 닫섯 가지 산술연산 결과를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
    // 입력받은 두 숫자를 저장할 변수
	int num1, num2;
	
	// 두 숫자 입력 받기
	printf("Input two integers : ");
	scanf("%i %i", &num1, &num2);
	
	// 입력 받은 숫자로 사칙연산 계산하고 결과값 출력하기
	printf("+ result is %d\n", num1 + num2);
	printf("- result is %d\n", num1 - num2);
	printf("* result is %d\n", num1 * num2);
	printf("/ result is %d\n", num1 / num2);
	printf("%% result is %d\n", num1 % num2);
	
	return 0;
}