#include <stdio.h>

int all_files; // 전역 변수 선언

extern void sub(); // sub() 함수 선언

int main(void) {
	sub();
	
	printf("%d\n", all_files);
	
	return 0;
}

extern int all_files; // 전역 변수 선언

void sub(void) {
	all_files = 10;
}