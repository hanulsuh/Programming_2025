/* 입력 받은 단어를 파일로 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
    FILE *fp; // FILE 포인터 정의
    char word[50]; // 입력받은 단어를 저장할 배열
    
    // 파일 열기
    fp = fopen("sample.txt", "w");
    
    // 세 개의 단어를 입력받아 파일에 내용 쓰기
    for (int i = 0; i < 3; i++) {
    	printf("Input a word : ");
    	scanf("%s", word);
    	fprintf(fp, "%s\n", word);
	}
	
	// 파일 닫기
	fclose(fp);
	
	return 0;
}

