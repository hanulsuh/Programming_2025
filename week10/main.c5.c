/* 두 행렬을 더하고 더한 결과를 출력하는 프로그램 */

#include <stdio.h>
#define ROWS 3
#define COLS 3

// 사용할 함수 선언
void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]);
void printMatrix(int A[ROWS][COLS]);

int main(void) {
	int A[ROWS][COLS] = { // 덧셈 대상 행렬
		{2, 3, 0},
		{8, 9, 1},
		{7, 0, 5}	
	};
	int B[ROWS][COLS] = { // 덧셈 대상 행렬
		{1, 0, 0},
		{0, 1, 0},
		{0, 0, 1}	
	};
	int C[ROWS][COLS]; // 덧셈 결과 행렬
	
	addMatrix(A, B, C);
	printMatrix(C);
	
	return 0;	
}

// 두 개의 행렬을 더하는 함수
void addMatrix(int A[ROWS][COLS], int B[ROWS][COLS], int C[ROWS][COLS]) {
	int i, j;
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			C[i][j] = A[i][j] + B[i][j];
		}
	}
}

// 두 행렬의 덧셈 결과를 출력하는 함수
void printMatrix(int A[ROWS][COLS]) {
	int i, j;
	
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLS; j++) {
			printf("%d ", A[i][j]);
		}
		
		printf("\n");
	}
	
}

