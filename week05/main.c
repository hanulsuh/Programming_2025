/* 산술 연산자를 활용하는 프로그램 */

#include <stdio.h>

int main(int argc, char *argv[]) {
	// 정수형 변수
	int x, y, z, m;
	int a, b, c;
	
	// 변수에 값 초기화
	x = 2;
	z = 1;
	a = 3;
	b = 4;
	c = 5;
	
	// 계산할 수식
	y = a*x*x + b*x + c;
	m = (x+y+z)/3;
	
	// 계산 결과 출력하기
	printf("y = %d, m = %d", y, m);
	
	return 0;
}