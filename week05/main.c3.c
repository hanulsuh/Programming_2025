#include <stdio.h>
#include <stdlib.h>

int main(void) {
	
	int a;
	
	printf("Input the second : ");
	scanf("%d", &a);
	
	printf("The time is %d : %d", a/60, a%60);
	
	return 0;
}