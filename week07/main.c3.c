#include <stdio.h>

// 입력받은 정수의 제곱을 계산하는 함수 정의
int square(int a) 
{ 
	return (a*a);
}

int main() {
	int a = 2;
	a = square(a);
	printf("a = %i\n", a);
}

/*
void square(int a) {
	a = a*a;
}

int main() {
	int a = 2;
	square(a);
	printf("a = %i\n", a);
}
*/