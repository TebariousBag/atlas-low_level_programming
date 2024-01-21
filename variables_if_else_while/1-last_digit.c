#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* betty style doc for function main goes there */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i is greater than 5\n");
	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n");
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6\n");
	
	return (0);
}
