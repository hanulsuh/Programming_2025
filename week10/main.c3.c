/* 배열을 비교해서 서로 다른 값을 가진 index를 출력하는 프로그램 */

#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int main(void) {
    int i; // 반복문을 위한 카운터 변수
    int a[SIZE] = {1, 2, 3, 4, 5}; // 첫 번째 배열
    int b[SIZE] = {1, 2, 3, 7, 10}; // 두 번째 배열

    // for문을 사용해서 서로 다른 값을 가진 index를 출력하기
    for (i = 0; i < SIZE; i++) {
        if (a[i] != b[i]) {
            printf("Difference found at index %d\n", i);
        }
    }

    return 0;
}


/*
if (a == b) {
	printf("Arrays have the same values.\n");
} else {
	printf("Arrays have different values.\n");
}
*/


/*  임의로 생성한 성적을 점수 배열에 복사하여 그 결과 출력하기 */
/*
int main(void) {
    int i; // 반복문을 위한 카운터 변수
    int grade[SIZE]; // 성적을 저장할 배열
    int score[SIZE]; // 점수를 저장할 배열
    
    // for문을 사용해서 생성한 성적 값을 점수 배열에 복사하기
    for (i = 0; i < SIZE; i++) {
        grade[i] = rand() % 100;
        score[i] = grade[i];
    }
    
    // for문을 사용해서 점수 값 출력하기
    for (i = 0; i < SIZE; i++) {
        printf("score[%d] = %d\n", i, score[i]);
    }
    
return 0;
}
*/