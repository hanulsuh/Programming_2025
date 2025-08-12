#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int answer = 50;
	int guess;
	int trials = 0;
	
	do {
		printf("Guess a number : ");
		scanf("%d", &guess);
		
		trials++;
		
		if (guess > answer) {
			printf("High!\n");
		}
		else if (guess < answer) {
			printf("Low!\n");
		}
	} while (guess != answer);
	
	printf("Congratulation! Trials : %d\n", trials);
	
	return 0;
}