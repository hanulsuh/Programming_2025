/* 정수와 실수를 입력받고 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int input_int; // 입력받은 정수를 저장할 변수
	float input_float; // 입력받은 실수를 저장할 변수
	
	// 정수 입력 받기
	printf("enter an integer : ");
	scanf("%d", &input_int);
	
	// 실수 입력 받기
	printf("enter a float : ");
	scanf("%f", &input_float);
	
	// 입력받은 정수와 실수 출력하기
	printf("integer : %d, float : %f\n", input_int, input_float);
	
	return 0;
}