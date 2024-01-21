#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	ld = n % 10

	if (ld > 5);
		printf("Last digit of %i is %i is greater than 5\n");
	else if (ld == 0);
		printf("Last digit of %i is %i and is 0\n");
	else if(ld < 6);
		printf("Last digit of %i is %i and is less than 6\n");
	
	return (0);
}
