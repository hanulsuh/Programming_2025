#include <stdio.h>

static int sum = 1; // 정적 변수 선언

int main(void) {
	int sum = 0;
	
	printf("sum = %d\n", sum);
	
	return 0;
}

/*
extern int sum;
*/

int sum1(void) {
	sum = sum +1;
}
