/* 지역 변수가 속한 블록을 벗어나면 사라지는 것을 보여주는 프로그램 */

#include <stdio.h>

int main(void) {
	
	int i; // for 반복문에서 사용할 카운터 변수
	
	for(i = 0; i < 5; i++) {	
	    int temp = 1; // 변수 선언 및 초기화
	    
		printf("temp = %d\n", temp); // 반복문 결과를 출력하기
		
		temp++;
	}
	
	return 0;
}