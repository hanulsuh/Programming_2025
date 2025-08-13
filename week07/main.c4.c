#include <stdio.h>

int get_integer(void);
int combination(int n, int r);
int factorial(int n);

int main(void) {
	
	int n,r;
	int result;
	
	n = get_integer();
	r = get_integer();
	
	result = combination(n, r);
	
	printf("The result of C(%d, %d) is %d.\n", n, r, result);
	
	return 0;
}

int combination(int n, int r) {
	return factorial(n) / (factorial(n-r) * factorial(r));
}

int factorial(int n) {
	int res = 1;
	int i;
	for (i = 1; i <= n; i++) {
		res = res * i;
	}
	return res;
}

int get_integer(void) {
	int value;
	printf("Enter the value : ");
	scanf("%d", &value);
	return value;
}