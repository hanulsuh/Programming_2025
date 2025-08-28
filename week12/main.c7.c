/* 이중 포인터 변수를 이용해 포인터 변수가 가리키는 문자열을 수정하여 출력하는 프로그램 */

#include <stdio.h>

// char형 포인터 변수 선언 및 문자열로 초기화
char *proverb = "All that glisters is not gold."; 

// setPointer 함수 선언
void setPointer(char **q);

int main(void) {
	// char형 포인터 변수 선언 및 문자열로 초기화
	char *p = "zzz";
	
	// setPointer 함수 실행
	setPointer(&p);
	
	// 바뀐 p값 출력
	printf("%s\n", p);
	
	return 0;
}

// 이중 포인터를 이용해 원본 포인터가 proverb를 가리키도록 변형하는 함수
void setPointer(char **q) {
	*q = proverb;
}

/* call by value 방식을 사용하여 포인터 변수가 가리키는 대상을 바꾸어 출력하지 못함 */
/*
void setPointer(char *q);

int main(void) {
	char *p = "zzz";
	
	setPointer(p);
	
	printf("%s\n", p);
	
	return 0;
}

void setPointer(char *q) {
	q = proverb;
}
*/