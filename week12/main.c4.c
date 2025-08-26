/* 숫자를 입력받아 배열에 저장하고 그 결과와 평균을 출력하는 프로그램 */
#include <stdio.h>

int main(void) {
	int i; // 반복문을 위한 카운터 변수
	int grade[5]; // 입력받은 숫자를 저장할 배열
	int sum = 0; // 총합을 저장할 변수
	int *p = grade; // 포인터 변수가 grade 배열의 시작 주소를 가리킴
	
	// for문을 사용해서 5개의 숫자를 입력받아 grade배열에 저장하기
	for (i = 0; i < 5; i++) {
		printf("Input value - grade[%i] = ", i);
		scanf("%d", &grade[i]);
	}
	
	// for문을 사용해서 배열의 각 요소를 출력하고 총합 계산하기
	for (i = 0; i < 5; i++) {
		printf("grade[%d] = %d\n", i, *(p + i));
		
		sum += *(p + i);		
	}
	
	// 평균 계산해서 출력하기
	printf("average : %d\n", sum / 5);
	
	return 0;
}