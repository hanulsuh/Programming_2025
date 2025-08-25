/* 배열과 그 배열을 제곱한 배열을 출력하는 프로그램 */

#include <stdio.h>
#define SIZE 4

// 앞으로 사용할 함수 선언
void square_array(int a[], int size);
void print_array(int a[], int size);

int main(void) {
	// 배열 선언
	int list[SIZE] = {1, 2, 3, 4};
	
	// 배열을 출력하고 그 배열을 제곱한 배열을 출력하기
	print_array(list, SIZE);
	square_array(list, SIZE);
	print_array(list, SIZE);
	
	return 0;
}

// 배열을 제곱하는 함수
void square_array(int a[], int size) {
	int i;
	
	for (i = 0; i < SIZE; i++) {
		a[i] = a[i] * a[i];
	}
}

// 배열을 출력하기
void print_array(int a[], int size) {
	int i;
	
	for (i = 0; i < SIZE; i++) {
		printf("%3d", a[i]);
	}
	
	printf("\n");
}