#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - positive is better than negative
 * Description: print whether a number is positive or negative
 * Return: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);

	return (0);
}
