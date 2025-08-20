/* 숫자를 입력받아 정답 숫자보다 큰 지 작은 지 여부를 출력하고, 정답을 맞추면 시도 횟수를 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	int answer = 50; // 정답 숫자를 저장하는 변수
	int guess; // 입력받은 숫자를 저장할 변수
	int trials = 0; // 시도 횟수를 저장할 변수
	
	// 반복적으로 답을 입력받고 정답보다 큰지 작은지 여부를 출력하기
	do {
		printf("Guess a number : ");
		scanf("%d", &guess);
		
		trials++;
		
		if (guess > answer) {
			printf("High!\n");
		}
		else if (guess < answer) {
			printf("Low!\n");
		}
	} while (guess != answer);
	
	// 축하 메세지와 시도 횟수를 출력하기
	printf("Congratulation! Trials : %d\n", trials);
	
	return 0;
}