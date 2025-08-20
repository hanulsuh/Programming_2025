/* 두 개의 정수를 입력받아 합, 제곱, 최댓값을 계산하여 출력하는 프로그램 */

#include <stdio.h>

// 앞으로 사용할 함수들을 선언하기
int sumTwo(int a, int b);
int square(int n);
int get_max(int x, int y);

int main() {
	// 입력받은 두 개의 정수를 저장할 변수
	int num1, num2; 
	
	// 두 개의 정수 입력받기
	printf("Enter the integers : ");
	scanf("%d %d", &num1, &num2);
	
	// 각 함수를 호출하여 계산한 결과를 출력하기
	printf("Result - Sum : %d, Square : %d, Max : %d\n", sumTwo(num1, num2), square(num1), get_max(num1, num2));
	
	return 0;
}

// 두 개의 정수를 더한 결과를 반환하는 함수 정의
int sumTwo(int a, int b) {
	return a + b;
}

// 정수를 제곱한 결과를 반환하는 함수 정의
int square(int n) {
	return n*n;
}
 // 두 개의 정수 중 더 큰 값을 반환하는 함수 정의
int get_max(int x, int y) {
	if (x > y) {
		return x;
	} else {
		return y;
	}
}