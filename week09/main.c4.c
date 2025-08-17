#include <stdio.h>

void sub(void);

int main(void) {	
	int i;	
	for(i = 0; i < 3; i++) {
	  sub();
    }
	return 0;
}

// static allocation 과 automatic allocationi의 차이를 알아보는 함수 정의
void sub(void) { 	
	int auto_count = 0;
	static int static_count = 0;
		
	auto_count++;
	static_count--;
	
	printf("quto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
	
}

// static 키워드가 붙은 변수는 블록에서 빠져나가도 소멸하지 않고 살아있는다.