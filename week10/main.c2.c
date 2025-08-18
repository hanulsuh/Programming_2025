#include <stdio.h>
#define SIZE 5

int main(void) {
	// 변수 선
	int i, average;
	int sum = 0;
	int grade[SIZE];
	
	for(i = 0; i < SIZE; i++) {
		printf("학생 성적을 입력하세요. : ");
		scanf("%d", &grade[i]);
		sum += grade[i];
	}
	
	average = sum / SIZE;
	
	printf("성적 평균 : %d\n", average);
	
	return 0;
}


/*
#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
	int i;
	int grade[SIZE];

	printf("5명의 점수를 입력하세요.\n");

	for(i = 0; i < SIZE; i++) {
		scanf("%d", &grade[i]);
    }
    
    for(i = 0; i < SIZE; i++) {
    	printf("grade[%d] = %d\n", i, grade[i]);
	}

	return 0;
}
*/