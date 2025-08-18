/* 알파벳 문자를 입력받으면 그 다음 문자를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	// 문자를 저장할 변수
	char input_char, next_char;
 
    // 알파벳 문자를 입력받기
    printf("enter a character : ");
    scanf("%c", &input_char);
 
    // 입력받은 변수에 1을 더해 다음 알파벳 구하기
    next_char = input_char + 1;
 
    // 입력받은 알파벳과 그 다음 알파벳 출력하기
    printf("the next character of %c (%i) is %c (%i)\n", input_char, input_char, next_char, next_char); 
 
    return 0;
}