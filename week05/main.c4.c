/* 연도를 입력받아 윤년인지 여부를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	//
	int year;
	int is_leap;
	
	//
	printf("Input the year : ");
	scanf("%d", &year);
	
	//
	is_leap = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
	
	//
	printf("Is the year %d the leap year? %d\n", year, is_leap);
	
	return 0;
}