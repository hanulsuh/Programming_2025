/* 다섯 학생에 대한 시험 점수 값들을 저장한 배열을 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int i; // for문에서 사용할 카운터 변수
	int grade[5]; // 배열 선언
	
	// 배열의 각 요소에 값 할당
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	// for 반복문을 사용해서 배열의 모든 요소를 출력하기
	for (i = 0; i < 5; i++) {
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	return 0;
	
}