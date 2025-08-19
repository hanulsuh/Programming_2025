/* 두 개의 정수를 입력 받아 5개의 비트 연산 결과를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	// 입력받은 두 개의 정수를 저장할 변수
	int num1, num2;
	
	// 두 개의 정수를 입력받기
	printf("Input two integers : ");
	scanf("%i %i", &num1, &num2);
	
	// 5개의 비트 연산자를 활용한 결과 출력하기
	printf("& result is %d\n", num1 & num2); // AND
	printf("| result is %d\n", num1 | num2); // OR
	printf("^ result is %d\n", num1 ^ num2); // XOR
	printf("<<1 result is %d\n", num1 <<1 ); // Left Shift
	printf(">>1 result is %d\n", num1 >>1 ); // Right Shift
	
	return 0;
}