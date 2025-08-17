#include <stdio.h>

void print_star() // 별을 10번 출력하는 함수 정의
{
 int i;
 for(i = 0; i < 10; i++)
   printf("*");
}

int main(void)
{
	print_star();
	print_star();
	print_star();
	
 return 0;
}


/*
int main(void) {
	int i;
	
	for(i = 0; i < 10; i++)
	 printf("*");
	for(i = 0; i < 10; i++)
	 printf("*");
	for(i = 0; i < 10; i++)
	 printf("*");
	 
	return 0;
}
*/