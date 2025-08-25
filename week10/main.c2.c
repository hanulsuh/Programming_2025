/* 다섯 학생의 성적을 입력 받고 성적 평균을 출력하는 프로그램 */ 

#include <stdio.h>
#define SIZE 5

int main(void) {
	int i, average; // 반복문을 위한 카운터 변수와 성적 평균을 저장할 변수
	int sum = 0; // 성적 총합을 저장할 변수
	int grade[SIZE]; // 다섯 학생에 대한 성적 값들을 저장할 배열
	
	
	// 다섯 학생의 성적을 입력 받아 총합 구하기
	for(i = 0; i < SIZE; i++) {
		printf("Enter a student's grade : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}

	average = sum / SIZE;

  // 다섯 학생의 성적 평균을 출력하기
	printf("Average grade : %d\n", average);

	return 0;
}


/* 다섯 학생의 시험 점수를 입력받고 출력하는 프로그램 */
/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
	int i; // for문에서 사용할 카운터 변수
	int score[SIZE]; // 다섯 학생에 대한 시험 점수 값들을 저장할 배열
  
	printf("Enter 5 scores.\n");
 
  // for 반복문을 사용해서 다섯 학생의 점수 입력받기
	for(i = 0; i < SIZE; i++) {
		scanf("%d", &score[i]);
    }
  
  // 입력 받은 점수를 출력하기
  for(i = 0; i < SIZE; i++) {
    printf("score[%d] = %d\n", i, score[i]);
	}

	return 0;
}
*/