/* 문자를 입력하면 숫자 형태로 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	char c; // 입력받은 문자를 저장할 변수
    int i; // 입력받은 문자의 숫자 형태를 저장할 변수
 
    // 문자 형태 숫자를 입력받기
    printf("input a number : ");
    scanf("%c", &c);
 
    // c에 저장된 문자 값을 숫자로 변환하기
    i = c - '0';
    
    // 입력받은 문자를 숫자 형태로 출력하기
    printf("The input number is %i\n", i);
	
    return 0;
 }