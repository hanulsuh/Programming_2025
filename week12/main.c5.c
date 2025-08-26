/* 다양한 유형의 포인터에 대한 증가 연산을 수행하는 프로그램 */

#include <stdio.h>

int main(void) {
	char *pc;   // char형 변수를 가리키는 포인터 변수
	int *pi;    // int형 변수를 가리키는 포인터 변수
	double *pd; // double형 변수를 가리키는 포인터 변수
	
	// 각 포인터 변수에 10000이라는 주소 값 할당하기
	pc = (char*)10000;
	pi = (int*)10000;
	pd = (double*)10000;
	
	// 증가 전 각 포인터들이 가리키는 주소 값 출력하기
	printf("Before increase : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	// 각 포인터 값을 1 증가시킴
	pc++;
	pi++;
	pd++;
	
	// 증가 후 각 포인터들이 가리키는 주소 값 출력하기
	printf("After increase : pc = %d, pi = %d, pd = %d\n", pc, pi, pd);
	
	return 0;	
}