/* swap함수를 이용해서 두 변수에 들어있는 값을 바꾸어 출력하는 프로그램 */

#include <stdio.h>

// 사용할 함수 선언
void swap(int *x, int *y);

void main(void) {
	// 정수형 변수 선언 및 초기화
	int a = 3;
	int b = 5;
	
	// swap함수 실행하기
	swap(&a, &b);
	
	// 변경된 a와 b의 값 출력하기
	printf("a : %i, b : %i\n", a, b);
}

/* call by reference */
// 두 변수에 들어있는 값을 서로 바꾸는 함수
void swap(int *x, int *y) {
	int temp;
	
	temp = *x;
	*x = *y;
	*y = temp;
}

/*call by value */
/*
void swap(int x, int y) {
	int temp = x;
	x = y;
	y = temp;
}

void main(void) {
	int a = 3;
	int b = 5;
	
	swap(a, b);
	
	printf("a : %i, b : %i\n", a, b);
}
*/