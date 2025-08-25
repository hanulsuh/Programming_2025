/* 문자열을 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int i = 0; // 반복문을 위한 카운터 변수
	char str[4]; // 문자열 변수
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	// 문자열 출력하기
	printf("%s\n", str);
	
	// 문자열 문자 하나씩 출력하기
	while (str[i] != '\0') {
	printf("%c\n", str[i]);
	i++;
  }
}