/* 문자열을 입력받아 문자열 내에서 숫자의 개수를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int c; // getchar()로 입력받은 한 문자를 저장할 변수
	int num = 0; // 입력받은 문자열 내 숫자 개수를 저장할 변수
	
	// 문자열을 입력받아 문자열 내 숫자 개수 세기
	printf("Input a string : ");
	while((c = getchar()) != '\n') {
		if (c >= '0' && c <= '9') {
			num++;
		}
	}
	
	// 문자열 내 숫자 개수 출력하기
	printf("The number of digits is %d\n", num);
	
	return 0;
}