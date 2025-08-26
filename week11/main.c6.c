/* 파일을 읽어서 내용을 출력하는 프로그램 */

#include <stdio.h>
 
void main(void) {
	FILE *fp = NULL; // 파일 포인터 선언 및 초기화
	char c;          // 파일에서 읽은 문자를 저장할 변수
	
	// sample.txt 파일을 읽기 모드로 열기
	fp = fopen("sample.txt", "r");
	
	// 파일 열기 실패 시 오류 메시지 출력하기
	if (fp == NULL) {
		printf("Can't open file\n");
	}	
	
	// 파일의 끝까지 한 글자씩 읽고 출력하기
	while ((c = fgetc(fp)) != EOF) {
		printf("%c", c);
	}
	
	// 파일 닫기
	fclose(fp);
}