/* 전역 변수 i를 공유하여 발생하는 문제점을 보여주는 프로그램램 */

#include <stdio.h>

void f(void);

int i; // for 반복문에서 사용할 카운터 변수

int main(void) {	
    // for문을 사용해서 f함수 5번 시행하기
	for(i = 0; i < 5; i++) {
		f();
	}
	return 0;
}

// #을 10번 출력하는 함수 정의
void f(void) {
	for(i = 0; i < 10; i++)
	  printf("#");
}