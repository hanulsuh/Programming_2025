#include <stdio.h>

int main(void) {
	
	int number; // 입력받는 숫자
	int absolute_value; // 절댓값을 저장할 변수
	
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	// 삼항 연산자를 사용하여 절댓값을 계산
	absolute_value = (number < 0) ? -number : number;
	
	printf("%d\n", absolute_value);
	
	return 0;
}