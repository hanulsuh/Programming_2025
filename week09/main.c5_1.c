#include <stdio.h>

// 전역 변수 선언
int all_files; 

// 사용할 함수 선언
extern void sub(); 

int main(void) {
	sub();
	
	// 전역 변수 all_files의 값을 출력하기
	printf("%d\n", all_files);
	
	return 0;
}

extern int all_files; 

// 전역 변수 all_files의 값을 변경하는 함수 정의
void sub(void) {
	all_files = 10;
}