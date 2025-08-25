/* 문자열 길이를 출력하는 프로그램 */

#include <stdio.h>
#include <string.h>

void main(void) {
	char str[30] = "happy C programming"; // 길이를 계산할 문자열

  // 문자열 길이 계산하여 출력하기	
	printf("Length of string \"%s\" : %i\n", str, strlen(str)); 
}