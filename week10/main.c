#include <stdio.h>

int main(void) {
	// 변수 선언
	int i;
	int grade[5];
	
	// 베얄의 각 요소에 변수 할당
	grade[0] = 10;
	grade[1] = 20;
	grade[2] = 30;
	grade[3] = 40;
	grade[4] = 50;
	
	// for 반복문을 사용해서 배열의 모든 요소 출력
	for (i = 0; i < 5; i++) {
		printf("grade[%d] = %d\n", i, grade[i]);
	}
	
	return 0;
	
}
