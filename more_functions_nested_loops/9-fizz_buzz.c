#include <stdio.h>
/**
 * main - function prints numbers 1-100 except multiples of 3 and 5, then its replaced with fizz or buzz
 * Return: void
 */

int main(void)
{
	int i;

	for (i = 1 ; i <= 100 ; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");

		else if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
		{
			if (i != 100)
				printf("Buzz ");

			else
				printf("Buzz");
		}
		else
			printf("%d ", i);
	}
	printf("\n");
	return (0);
}
