/* 네 명의 학생 정보, 성적을 입력받아 성적의 평균, 가장 성적이 높은 학생의 ID, 성적을 출력하는 프로그램 */

#include <stdio.h>
#define STUDENTNUM 4

// student 구조체 선언
struct student {
	int ID;
	int score;
};

void main(void) {
	struct student s[STUDENTNUM]; // 구조체 변수 s[STUDENTNUM]
	int i;                        // for문을 위한 카운터 변수
	int sum = 0;                  // 성적 총합을 저장할 변수
	int max_score = 0;            // 가장 높은 성적을 저장할 변수
	int max_id = 0;               // 성적이 가장 높은 학생의 ID를 저장할 변수
	
	// 4명의 학생 ID를 입력받고, 총합 및 최고 점수 계산
	for (i = 0; i < STUDENTNUM; i++) {
		printf("Input the ID : "); 
		scanf("%d", &s[i].ID);
		
		printf("Input the score : ");
		scanf("%d", &s[i].score); 
		
		// 성적 총합 계산
		sum += s[i].score; 
		
		// 현재 최고 점수와 비교하여 갱신
		if (s[i].score > max_score) { 
			max_score = s[i].score;
			max_id = s[i].ID;
		}
	}
	
	// 최종 결과 출력
	printf("The average of the score : %f\n", (double)sum / STUDENTNUM);
	printf("The highest score - ID : %d, score : %d\n", max_id, max_score);
}