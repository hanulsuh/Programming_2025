/* 이름이 같은 지역 변수와 전역 변수의 우선순위를 보여주는 프로그램  */
#include <stdio.h>

// 정적 변수 선언
static int sum = 1; 

int main(void) {
	int sum = 0; // sum 변수 선언 및 초기화
	
	// 결과 출력하기	
	printf("sum = %d\n", sum);
	
	return 0;
}

/*
extern int sum;


int sum1(void) {
	sum = sum +1;
}
*/