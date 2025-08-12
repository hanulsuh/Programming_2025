#include <stdio.h>
#include <stdlib.h>


int main(void) {
	
	int number;
	
	printf("Enter an integer : ");
	scanf("%i", &number);
	
	if (number > 0) {
	    printf("This is positive number.\n");
	} else if ( number < 0) {
       printf("This is negeative number.\n");	
	} else {
       printf("This is 0.\n");	
	}	
	
	return 0;
}