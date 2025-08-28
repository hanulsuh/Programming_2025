/* flag 변수를 이용해 while문을 한 번만 실행하는 프로그램 */

int main(void) {	
	int flag = 1; // flag 변수를 1로 초기화
	int y;        // 정수를 저장할 변수
	
	// flag가 0이 아닐 동안 반복
	while(flag != 0) {
		y = 3;
		flag = 0;
	}
	
	y = 4;
	
	return 0;
}

// 변수는 선언된 중괄호 안에서만 유효함
// 변수 y를 반복문 안에서 선언했으므로 반복문이 끝난 후 y에 접근하려고 하면 선언되지 않은 변수이므로 오류 발생
/*
int main(void) {
	int flag = 1;
	 
	while(flag != 0) {
		int y;
		y = 3;
		flag = 0;
	}
	 
	y = 4;
	 
	return 0;
}
*/
