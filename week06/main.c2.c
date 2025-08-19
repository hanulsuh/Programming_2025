/* 정수를 입력받아 절댓값을 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int number; // 입력받은 정수를 저장할 변수
	int absolute_value; // 절댓값을 저장할 변수
	
	// 정수 입력받기
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	// 삼항 연산자를 사용하여 절댓값을 계산하기
	absolute_value = (number < 0) ? -number : number;
	
	// 입력받은 정수에 대한 절댓값을 출력하기
	printf("%d\n", absolute_value);
	
	return 0;
}