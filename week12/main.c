/* 포인터를 선언하고 변수의 주소와 값을 출력하는 프로그램 */

#include <stdio.h> 

int main(void) {
	int i = 10; // 정수형 변수 선언 및 초기화
	char c = 'a'; // 문자형 변수 선언 및 초기화
	
	// 포인터 변수를 선언하고 특정 변수의 주소를 가리키도록 함
	int *iptr; 
	iptr = &i;
	char *cptr; 
	cptr = &c; 
	int *iptr2;
	iptr2 = &i;	
	
	// 포인터에 저장된 주소, 실제 주소, 변수의 크기 출력하기
	printf("i : %p\n %p (size : %i)\n", iptr, &i, sizeof(iptr));
	printf("c : %p\n %p (size : %i)\n", cptr, &c, sizeof(cptr));
	
	// 포인터에 저장된 주소와 가리키는 대상의 값 출력하기
	printf("iptr2 : %p, %i\n", iptr2, *iptr2);
	
	return 0; 
}