/* 정수를 입력받아 양수/ 음수/ 0인지 여부를 판단하여 출력하는 프로그램 */

#include <stdio.h>

int main(void) {
	// 입력받은 정수를 저장할 변수
	int number;
	
	// 정수 입력받기 
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	// 입력받은 정수가 양수/음수/ 0인지 여부를 판단하여 출력하기
	if (number > 0) {
	    printf("This is positive number.\n");
	} else if ( number < 0) {
       printf("This is negeative number.\n");	
	} else {
       printf("This is 0.\n");	
	}	
	
	return 0;
}
