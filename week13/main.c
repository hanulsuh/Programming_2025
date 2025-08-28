/* student 구조체를 이용해서 학번, 이름, 학점을 출력하는 프로그램 */

#include <stdio.h>
#include <string.h>

// student 구조체 선언
struct student {
	int ID;
	char name[10];
	double grade;
};

int main(void) {
	// 구조체 변수 선언 및 초기화
	struct student s1 = {1, "Suh", 3.5};
	
	// 구조체 변수 s1의 멤버 값을 다른 값으로 변경
	s1.ID = 24;
	strcpy(s1.name, "Hanul");
	s1.grade = 4.2;
	
	// 구조체 변수 s1의 멤버 값을 각각 출력
	printf("ID : %d\n", s1.ID);
	printf("name : %s\n", s1.name);
	printf("grade : %f\n", s1.grade);
	
	return 0;
}