/* 두 개의 숫자를 입력받아 나누는 프로그램 */

#include <stdio.h>

int main(void) {
	// 입력받은 숫자를 저장할 실수형 변수
    float a, b;
 
    // 두 정수 입력받기
    printf("enter two integers : ");
    scanf("%f, %f", &a, &b);
 
    // 두 정수를 나누고 결과값 출력하기
    printf("%f / %f = %f\n", a, b, a / b);
 
    return 0;
}