/* 구조체 포인터를 이용해서 두 점으로 만들어지는 사각형의 넓이를 출력하는 프로그램 */

#include <stdio.h>
#include <stdlib.h>

struct point { // point 구조체 선언
	int x; // 구조체 멤버 변수 x
	int y; // 구조체 멤버 변수 y
};

// 사용할 함수 선언
int getArea(struct point *pPtr1, struct point *pPtr2);

int main(void) {
	struct point p1, p2;         // 구조체 변수 p1, p2
	struct point *pPtr1, *pPtr2; // 구조체 포인터 변수 pPtr1, pPtr2
	int area;                    // 넓이를 저장할 변수
	
	// 포인터 변수가 구조체 변수를 가리키게 함 
	pPtr1 = &p1;
	pPtr2 = &p2;
	
	// p1의 좌표 입력 받기
	printf("Input the coordinate p1 (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
	
	// p2의 좌표 입력 받기
	printf("Input the coordinate p2 (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);	
	
	// getArea 함수를 호출하고, 반환값을 변수 area에 저장
	area = getArea(pPtr1, pPtr2);
	
	// 계산된 넓이 출력
	printf("Area : %d\n", area);
	
	return 0;
}

// 두 점의 포인터를 인수로 받아 사각형의 넓이를 계산하는 함수
int getArea(struct point *pPtr1, struct point *pPtr2) {
	int width = abs(pPtr2 -> x - pPtr1 -> x);  // 가로 길이 계산
	int height = abs(pPtr2 -> y - pPtr1 -> y); // 세로 길이 계산
	
	return width * height; // 계산된 넓이 반환
}

/* 구조체를 이용해서 두 점으로 만들어지는 사각형의 넓이를 출력하는 프로그램 */
/*

struct point { // point 구조체 선언
	int x; // 구조체 멤버 변수 x
	int y; // 구조체 멤버 변수 y
};

// 사용할 함수 선언
int getArea(struct point p1, struct point p2);

int main(void) {
	struct point p1, p2; // 구조체 변수 p1, p2
	int area;            // 넓이를 저장할 변수
	
	// p1의 좌표 입력 받기
	printf("Input the coordinate p1 (x y) : ");
	scanf("%d %d", &p1.x, &p1.y);
 
    // p2의 좌표 입력 받기
	printf("Input the coordinate p2 (x y) : ");
	scanf("%d %d", &p2.x, &p2.y);
	
	// getArea 함수를 호출하고, 반환값을 변수 area에 저장
	area = getArea(p1, p2);
	
	// 계산된 넓이 출력
	printf("Area : %d\n", area);
	
	return 0;
}

// 두 점을 인수로 받아 사각형의 넓이를 계산하는 함수
int getArea(struct point p1, struct point p2) {
	int width = abs(p2.x - p1.x);  // 가로 길이 계산
	int height = abs(p2.y - p1.y); // 세로 길이 계산
	
	return width * height; // 계산된 넓이 반환
}
*/



