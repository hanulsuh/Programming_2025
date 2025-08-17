#include <stdio.h>

void f(void);

int i;

int main(void) {	
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