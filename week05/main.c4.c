/* 연도를 입력받아 윤년인지 여부를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int year; // 입력받은 연도를 저장할 변수
	int is_leap; // 윤년 여부를 저장하는 변수 (1 : 윤년, 0 : 평년)
	
	// 연도 입력받기
	printf("Input the year : ");
	scanf("%d", &year);
	
	// 윤년인지 판별하기
	is_leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	
	// 입력받은 연도가 윤년인지 출력하기
	printf("Is the year %d the leap year? %d\n", year, is_leap);
	
	return 0;
}