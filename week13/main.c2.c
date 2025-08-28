/* 구조체 멤버를 통한 연산으로 좌표 간 거리 계산하고 출력하기 */

#include <stdio.h>
#include <math.h>

// point 구조체 선언
struct point {
	int x;
	int y;
};

int main(void) {
	struct point p1, p2; // 구조체 변수 p1, p2 
	int xdiff, ydiff;    // x좌표, y좌표의 차이를 저장할 변수
	double dist;         // 두 점 사이의 거리를 저장할 변수
	
	// 첫 번째 점 좌표 입력받기
	printf("input p1 coordinate (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	// 두 번째 점 좌표 입력받기
	printf("input p2 coordinate (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	// 두 점의 x좌표, y좌표 차이 계산하기
	xdiff = p2.x - p1.x;
	ydiff = p2.y - p1.y;
	
	// 두 점 사이의 거리 구하기
	dist = sqrt(pow(xdiff, 2) + pow(ydiff, 2));
	
	// 두 점 사이의 거리 출력하기
	printf("distance : %f\n", dist);
	
	return 0;
}