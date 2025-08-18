/* 초를 입력받아 분과 초의 형태로 출력하는 프로그램 */
#include <stdio.h>

int main(void) {
	// 입력받은 초를 저장할 변수
	int total_seconds;
	
	// 초 입력받기
	printf("Input the second : ");
	scanf("%d", &total_seconds);
	
	// 입력받은 초를 분과 초로 출력하기
	printf("The time is %d : %d", total_seconds / 60, total_seconds % 60);
	
	return 0;
}