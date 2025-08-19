/* 정수를 입력받아 1부터 입력된 정수까지 더한 결과를 출력하는 프로그램 */
#include <stdio.h>

int main(void) {
	int number; // 입력받은 정수를 저장할 변수
	int sum = 0; // 덧셈 결과를 저장할 변수
	int i;  // for 반복문에서 사용할 카운터 변수
	
	// 정수 입력받기
	printf("Enter a number : ");
	scanf("%d", &number);
	
	// for문을 활용해서 1부터 입력받은 정수까지 더하기
	for(i = 1; i <= number; i++) {
		sum = sum + i;
	}
	
	// 덧셈 결과를 출력하기
	printf("The result is %d\n", sum);
	
	return 0;
}