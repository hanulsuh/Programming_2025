/* 두 개의 정수를 입력받아 combination 계산값을 출력하는 프로그램 */

#include <stdio.h>

// 앞으로 사용할 함수들을 선언하기
int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(void) {
	
	int n, r; // 입력받은 두 개의 정수를 저장할 변수
	int result; // combination 결과값을 저장할 변수
	
	// 입력받은 정수를 변수에 저장하기
	n = get_integer();
	r = get_integer();
	
	result = combination(n, r);
	
	// Combination 결과값을 출력하기
	printf("The result of C(%d, %d) is %d.\n", n, r, result);
	
	return 0;
}

//combination 계산하는 함수 정의
int combination(int n, int r) {
	return factorial(n) / (factorial(n-r) * factorial(r));
}

// factorial 계산하는 함수 정의
int factorial(int n) {
	int res = 1;
	int i;
	
	for (i = 1; i <= n; i++) {
		res = res * i;
	}
	
	return res;
}

// 정수 입력받는 함수 정의
int get_integer(void) {
	int value;
	
	printf("Enter the value : ");
	scanf("%d", &value);
	
	return value;
}