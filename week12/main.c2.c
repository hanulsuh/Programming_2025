/* int형 변수를 char형 포인터로 읽을 때 결과를 확인하는 프로그램 */

#include <stdio.h>

void main(void) {
	int i = 300; // 정수형 변수 선언 및 초기화
	
	// int형 포인터와 char형 포인터가 모두 i를 가리킴
	int *pi = &i;
	char *pc = &i;
	
	// 변수 i 값, int형 포인터로 읽은 값, char형 포인터로 읽은 값을 출력하기
	printf("%i, %i, %i\n", i, *pi, *pc);
}

/*
void main(void) {
	int i = 4;
	
	int *pi = &i;
	char *pc = &i;
	
	printf("%i, %i, %i\n", i, *pi, *pc);
}
*/