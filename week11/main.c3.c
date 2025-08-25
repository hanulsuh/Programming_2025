/* 문자열을 복사하여 출력하는 프로그램 */

#include <stdio.h>
#include <string.h>

void main(void) {
	char src[] = "The worst things to eat before you sleep"; // 원본 문자열
	char dst[100]; // 복사 대상 문자열
	
	// 문자열 복사하기
	strcpy(dst, src);
	
	// 복사한 문자열 출력하기
	printf("copied string : %s", dst);
}