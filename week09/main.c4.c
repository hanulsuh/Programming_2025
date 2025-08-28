/* static 키워드의 역할을 확인하는 프로그램 */

#include <stdio.h>

// 앞으로 사용할 함수 선언
void sub(void);

int main(void) {	
	int i; // for문에서 사용할 카운터 변수	
	
	// for문을 사용해서 sub함수 3번 호출
	for(i = 0; i < 3; i++) {
	  sub();
    }
    
	return 0;
}

// 자동 할당과 정적 할당의 차이를 보여주는 함수 정의
void sub(void) { 
	// 함수가 시행될 때마다 0으로 초기화되는 변수	
	int auto_count = 0;          
	// 함수가 끝나도 값을 계속 기억하는 변수
	static int static_count = 0;
		
	auto_count++;
	static_count--;
	
	// 각 변수의 변화를 출력
	printf("auto_count = %d\n", auto_count);
	printf("static_count = %d\n", static_count);
	
}

// static 키워드가 붙은 변수는 블록에서 빠져나가도 소멸하지 않고 살아있는다.